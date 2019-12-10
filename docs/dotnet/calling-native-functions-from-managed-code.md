---
title: Chiamata a funzioni native da codice gestito
ms.date: 11/04/2016
helpviewer_keywords:
- native functions called from managed code [C++]
- managed code [C++], interoperability
- platform invoke [C++], interoperability
- interoperabiliy [C++], calling native functions from managed code
- calling native functions from managed code
- interop [C++], calling native functions from managed code
ms.assetid: 982cef18-20d9-42b4-8242-a77fa65f2e36
ms.openlocfilehash: 50f40cc147daaa26a7fa4e607f0d4dd42cf22d61
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988664"
---
# <a name="calling-native-functions-from-managed-code"></a>Chiamata a funzioni native da codice gestito

In Common Language Runtime è disponibile Platform Invocation Services, o PInvoke, che consente al codice gestito di chiamare le funzioni di tipo C in librerie a collegamento dinamico (DLL, Dynamic-Linked Library) native. Lo stesso marshalling dei dati viene utilizzato per l'interoperabilità COM con il runtime e per il meccanismo "It Just Works" (IJW).

Per altre informazioni, vedere:

- [Uso esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)

- [Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)

Negli esempi riportati in questa sezione viene illustrato in che modo è possibile utilizzare `PInvoke`. `PInvoke` possibile semplificare il marshalling dei dati personalizzato perché si forniscono informazioni di marshalling in modo dichiarativo negli attributi anziché scrivere codice di marshalling procedurale.

> [!NOTE]
>  La libreria del marshalling fornisce una modalità alternativa per l'esecuzione ottimizzata del marshalling dei dati tra ambienti nativi e gestiti. Per ulteriori informazioni sulla libreria di marshalling, vedere [Cenni preliminari sul C++ marshalling in](../dotnet/overview-of-marshaling-in-cpp.md) . La libreria del marshalling può essere utilizzata solo per i dati, non per le funzioni.

## <a name="pinvoke-and-the-dllimport-attribute"></a>PInvoke e l'attributo DllImport

Nell'esempio riportato di seguito viene illustrato l'utilizzo di `PInvoke` in un programma Visual C++. La funzione nativa puts è definita in msvcrt.dll. L'attributo DllImport è utilizzato per la dichiarazione della funzione puts.

```cpp
// platform_invocation_services.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

[DllImport("msvcrt", CharSet=CharSet::Ansi)]
extern "C" int puts(String ^);

int main() {
   String ^ pStr = "Hello World!";
   puts(pStr);
}
```

L'esempio riportato di seguito è equivalente a quello precedente, ma è basato sull'utilizzo di IJW.

```cpp
// platform_invocation_services_2.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

#include <stdio.h>

int main() {
   String ^ pStr = "Hello World!";
   char* pChars = (char*)Marshal::StringToHGlobalAnsi(pStr).ToPointer();
   puts(pChars);

   Marshal::FreeHGlobal((IntPtr)pChars);
}
```

### <a name="advantages-of-ijw"></a>Vantaggi offerti da IJW

- Non è necessario scrivere dichiarazioni dell'attributo `DLLImport` per le API non gestite utilizzate dal programma. È infatti sufficiente includere il file di intestazione e il collegamento alla libreria di importazione.

- Il meccanismo IJW risulta leggermente più veloce (ad esempio, gli stub IJW non richiedono alcun controllo connesso alla necessità di bloccare o copiare elementi di dati) poiché questa operazione viene eseguita dallo sviluppatore in modo esplicito.

- I problemi relativi alle prestazioni sono illustrati dettagliatamente. In questo caso sono rappresentati dalla conversione da una stringa Unicode a una stringa ANSI e dall'allocazione e deallocazione della memoria presente. In tale situazione, uno sviluppatore che scrive il codice utilizzando IJW dovrebbe comprendere che la soluzione migliore in termini di prestazioni consiste nel chiamare `_putws` e utilizzare `PtrToStringChars`.

- Se risulta necessario chiamare più API non gestite ricorrendo agli stessi dati, la procedura più efficiente consiste nell'eseguire il marshalling una sola volta all'inizio e quindi provvedere a passare la copia sulla quale è stato eseguito il marshalling, anziché ripetere il marshalling per ogni API.

### <a name="disadvantages-of-ijw"></a>Svantaggi di IJW

- Il marshalling deve essere specificato in modo esplicito nel codice anziché dagli attributi (che spesso hanno impostazioni predefinite appropriate).

- Il codice di marshalling è inline, punto in cui risulta maggiormente invasivo all'interno del flusso della logica dell'applicazione.

- Poiché le API di marshalling esplicito restituiscono tipi `IntPtr` per la portabilità da 32 a 64 bit, è necessario utilizzare chiamate `ToPointer` aggiuntive.

Il metodo specifico esposto da C++ è il metodo esplicito più efficiente, anche se implica alcune complessità aggiuntive.

Se l'applicazione utilizza soprattutto tipi di dati non gestiti o se chiama un numero di API non gestite maggiore rispetto a quello delle API .NET Framework, è generalmente consigliabile ricorrere all'utilizzo della funzionalità IJW. Per chiamare un'API non gestita occasionale nell'ambito di un'applicazione prevalentemente gestita, la scelta presenta maggiori difficoltà.

## <a name="pinvoke-with-windows-apis"></a>PInvoke con API Windows

PInvoke risulta utile per chiamare le funzioni in Windows.

In questo esempio un programma Visual C++ interagisce con la funzione MessageBox, che fa parte dell'API Win32.

```cpp
// platform_invocation_services_4.cpp
// compile with: /clr /c
using namespace System;
using namespace System::Runtime::InteropServices;
typedef void* HWND;
[DllImport("user32", CharSet=CharSet::Ansi)]
extern "C" int MessageBox(HWND hWnd, String ^ pText, String ^ pCaption, unsigned int uType);

int main() {
   String ^ pText = "Hello World! ";
   String ^ pCaption = "PInvoke Test";
   MessageBox(0, pText, pCaption, 0);
}
```

L'output consiste in una finestra di messaggio dal titolo PInvoke Test e contenente il testo Hello World!.

Le informazioni di marshalling vengono inoltre utilizzate da PInvoke per cercare funzioni all'interno della DLL. user32.dll non contiene, infatti, alcuna funzione MessageBox, ma CharSet=CharSet::Ansi consente a PInvoke di utilizzare MessageBoxA, ovvero la versione ANSI, anziché MessageBoxW, che rappresenta la versione Unicode. In generale, è consigliabile utilizzare le versioni Unicode delle API non gestite, poiché sono in grado di eliminare il sovraccarico della conversione dal formato Unicode nativo degli oggetti stringa .NET Framework ad ANSI.

## <a name="when-not-to-use-pinvoke"></a>Casi i cui non è consigliabile utilizzare PInvoke

L'utilizzo di PInvoke non è adatto a tutte le funzioni di tipo C contenute nelle DLL. Si supponga ad esempio che in mylib.dll sia presente una funzione MakeSpecial dichiarata come illustrato di seguito.

`char * MakeSpecial(char * pszString);`

Se si utilizza PInvoke in un'applicazione Visual C++, è possibile scrivere del codice simile a quello riportato di seguito:

```cpp
[DllImport("mylib")]
extern "C" String * MakeSpecial([MarshalAs(UnmanagedType::LPStr)] String ^);
```

In questo caso la difficoltà è rappresentata dall'impossibilità di eliminare la memoria per la stringa non gestita restituita da MakeSpecial. Altre funzioni chiamate tramite PInvoke restituiscono un puntatore a un buffer interno che non deve essere deallocato dall'utente. In questa situazione l'utilizzo della funzionalità IJW rappresenta la scelta più ovvia.

## <a name="limitations-of-pinvoke"></a>Limitazioni di PInvoke

Non è possibile che una funzione nativa restituisca lo stesso identico puntatore utilizzato come parametro. Se una funzione nativa restituisce il puntatore di cui è stato eseguito il marshalling alla funzione stessa tramite PInvoke, potrebbero verificarsi eccezioni e danneggiamenti della memoria.

```cpp
__declspec(dllexport)
char* fstringA(char* param) {
   return param;
}
```

L'esempio riportato di seguito illustra il problema e, nonostante l'output del programma possa sembrare corretto, tale output deriva dalla memoria che è stata liberata.

```cpp
// platform_invocation_services_5.cpp
// compile with: /clr /c
using namespace System;
using namespace System::Runtime::InteropServices;
#include <limits.h>

ref struct MyPInvokeWrap {
public:
   [ DllImport("user32.dll", EntryPoint = "CharLower", CharSet = CharSet::Ansi) ]
   static String^ CharLower([In, Out] String ^);
};

int main() {
   String ^ strout = "AabCc";
   Console::WriteLine(strout);
   strout = MyPInvokeWrap::CharLower(strout);
   Console::WriteLine(strout);
}
```

## <a name="marshaling-arguments"></a>Marshalling di argomenti

Se si utilizza `PInvoke`, non è necessario eseguire il marshalling tra tipi primitivi nativi gestiti e C++ con lo stesso formato. Non è ad esempio richiesto il marshalling tra Int32 e int o tra Double e double.

Tuttavia, è necessario effettuare il marshalling di tipi di formato diverso. ad esempio i tipi char, string e struct. Nella tabella riportata di seguito sono elencate le associazioni utilizzate dal gestore di marshalling per i vari tipi.

|wtypes.h|Visual C++ -|Visual C++ con /clr|Common Language Runtime|
|--------------|------------------|-----------------------------|-----------------------------|
|HANDLE|void \*|void \*|IntPtr, UIntPtr|
|BYTE|unsigned char|unsigned char|Byte|
|SHORT|short|short|Int16|
|WORD|unsigned short|unsigned short|UInt16|
|INT|int|int|Int32|
|UINT|unsigned int|unsigned int|UInt32|
|LONG|(long)|(long)|Int32|
|BOOL|(long)|bool|Boolean|
|DWORD|unsigned long|unsigned long|UInt32|
|ULONG|unsigned long|unsigned long|UInt32|
|CHAR|char|char|Char|
|LPCSTR|\* char|String ^ [in], StringBuilder ^ [in, out]|String ^ [in], StringBuilder ^ [in, out]|
|LPCSTR|\* const char|String ^|Stringa|
|LPWSTR|wchar_t \*|String ^ [in], StringBuilder ^ [in, out]|String ^ [in], StringBuilder ^ [in, out]|
|LPCWSTR|const wchar_t \*|String ^|Stringa|
|FLOAT|mobile|mobile|Single|
|DOUBLE|doppio|doppio|Double|

Il gestore di marshalling blocca automaticamente la memoria allocata nell'heap di runtime se il relativo indirizzo viene passato a una funzione non gestita. Il blocco impedisce al Garbage Collector di spostare il blocco di memoria allocato durante la compressione.

Nell'esempio riportato in precedenza in questo argomento il parametro CharSet di DllImport specifica come eseguire il marshalling di stringhe gestite. In questo caso il marshalling deve essere eseguito su stringhe ANSI per il lato nativo.

È possibile specificare le informazioni di marshalling relative ai singoli argomenti di una funzione nativa utilizzando l'attributo MarshalAs. Sono disponibili diverse opzioni per il marshalling di una stringa \* argomento: BStr, ANSIBStr, TBStr, LPStr, LPWStr e LPTStr. Quella predefinita è LPStr.

In questo esempio viene eseguito il marshalling della stringa come LPWStr, ovvero stringa di caratteri Unicode a doppio byte. L'output è la prima lettera del Hello World. Poiché il secondo byte della stringa di cui è stato effettuato il marshalling è null, viene interpretato come il marcatore di fine della stringa.

```cpp
// platform_invocation_services_3.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

[DllImport("msvcrt", EntryPoint="puts")]
extern "C" int puts([MarshalAs(UnmanagedType::LPWStr)] String ^);

int main() {
   String ^ pStr = "Hello World!";
   puts(pStr);
}
```

L'attributo MarshalAs è incluso nello spazio dei nomi System::Runtime::InteropServices e può essere utilizzato con altri tipi di dati, ad esempio le matrici.

Come indicato in precedenza nell'argomento, la libreria del marshalling fornisce un metodo nuovo e ottimizzato di marshalling dei dati tra ambienti nativi e gestiti. Per ulteriori informazioni, vedere [Cenni preliminari sul marshalling in C++ ](../dotnet/overview-of-marshaling-in-cpp.md).

## <a name="performance-considerations"></a>Considerazioni sulle prestazioni

Il sovraccarico di PInvoke è compreso tra 10 e 30 x86 istruzioni per chiamata. Oltre a questo costo fisso, il marshalling crea un ulteriore sovraccarico. Tra i tipi copiabili caratterizzati dalla stessa rappresentazione nel codice gestito e non gestito non sono presenti costi di marshalling. La conversione tra int e Int32, ad esempio, non prevede alcun costo.

Per ottenere prestazioni migliori, è opportuno ricorrere a un minor numero di chiamate PInvoke che eseguono il marshalling del maggior numero di dati possibile, anziché disporre di numerose chiamate che eseguono il marshalling di una ridotta quantità di dati per chiamata.

## <a name="see-also"></a>Vedere anche

[Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)
