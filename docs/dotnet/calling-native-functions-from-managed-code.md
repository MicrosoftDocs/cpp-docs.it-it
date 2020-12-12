---
description: 'Altre informazioni su: chiamata di funzioni native da codice gestito'
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
ms.openlocfilehash: b037027f863ff12ac83429715cdf50bff4549a93
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97282536"
---
# <a name="calling-native-functions-from-managed-code"></a>Chiamata a funzioni native da codice gestito

Il Common Language Runtime fornisce servizi di chiamata della piattaforma, o PInvoke, che consente al codice gestito di chiamare funzioni di tipo C in librerie a collegamento dinamico (dll) native. Lo stesso marshalling dei dati viene usato come per l'interoperabilità COM con il runtime e per il meccanismo "it Just Works," o IJW.

Per altre informazioni, vedere:

- [Utilizzo di PInvoke esplicito in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)

- [Uso dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)

Gli esempi in questa sezione illustrano come `PInvoke` può essere usato. `PInvoke` consente di semplificare il marshalling dei dati personalizzato perché si forniscono informazioni di marshalling in modo dichiarativo negli attributi anziché scrivere codice di marshalling procedurale.

> [!NOTE]
> La libreria di marshalling fornisce un metodo alternativo per eseguire il marshalling dei dati tra ambienti nativi e gestiti in modo ottimizzato. Per ulteriori informazioni sulla libreria di marshalling, vedere [Cenni preliminari sul marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md) . La libreria di marshalling è utilizzabile solo per i dati e non per le funzioni.

## <a name="pinvoke-and-the-dllimport-attribute"></a>PInvoke e l'attributo DllImport

Nell'esempio seguente viene illustrato l'utilizzo di `PInvoke` in un programma Visual C++. La funzione nativa put è definita in msvcrt.dll. L'attributo DllImport viene usato per la dichiarazione di put.

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

L'esempio seguente è equivalente all'esempio precedente, ma usa IJW.

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

### <a name="advantages-of-ijw"></a>Vantaggi di IJW

- Non è necessario scrivere `DLLImport` dichiarazioni di attributi per le API non gestite utilizzate dal programma. È sufficiente includere il file di intestazione e il collegamento con la libreria di importazione.

- Il meccanismo IJW è leggermente più veloce. ad esempio, gli stub IJW non devono verificare la necessità di aggiungere o copiare elementi di dati perché questa operazione viene eseguita in modo esplicito dallo sviluppatore.

- Illustra chiaramente i problemi di prestazioni. In questo caso, il fatto che si esegue la conversione da una stringa Unicode a una stringa ANSI e che si disponga di un'allocazione e deallocazione di memoria supervisore. In questo caso, uno sviluppatore che scrive il codice utilizzando IJW si renderà conto che la chiamata `_putws` a e l'utilizzo `PtrToStringChars` di sarebbe migliore per le prestazioni.

- Se si chiamano molte API non gestite usando gli stessi dati, il marshalling di una volta e il passaggio della copia con marshalling è molto più efficace del nuovo marshalling ogni volta.

### <a name="disadvantages-of-ijw"></a>Svantaggi di IJW

- Il marshalling deve essere specificato in modo esplicito nel codice anziché dagli attributi (che spesso hanno le impostazioni predefinite appropriate).

- Il codice di marshalling è inline, dove è più invasivo nel flusso della logica dell'applicazione.

- Poiché le API di marshalling esplicite restituiscono `IntPtr` tipi per la portabilità a 32 bit a 64 bit, è necessario utilizzare `ToPointer` chiamate aggiuntive.

Il metodo specifico esposto da C++ è il metodo più efficiente, esplicito, al costo di una maggiore complessità.

Se l'applicazione usa principalmente tipi di dati non gestiti o se chiama altre API non gestite rispetto a .NET Framework API, è consigliabile usare la funzionalità IJW. Per chiamare un'API occasionale non gestita in un'applicazione principalmente gestita, la scelta è più complessa.

## <a name="pinvoke-with-windows-apis"></a>PInvoke con API di Windows

PInvoke è utile per chiamare le funzioni in Windows.

In questo esempio, un programma di Visual C++ interagisce con la funzione MessageBox che fa parte dell'API Win32.

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

L'output è una finestra di messaggio con il titolo test PInvoke e contiene il testo Hello World.

Le informazioni di marshalling vengono inoltre utilizzate da PInvoke per cercare funzioni nella DLL. In user32.dll non è infatti presente alcuna funzione MessageBox, ma CharSet = CharSet:: ANSI consente a PInvoke di utilizzare MessageBoxa, la versione ANSI, anziché MessageBoxW, che è la versione Unicode. In generale, è consigliabile usare versioni Unicode di API non gestite perché questo Elimina l'overhead di traduzione dal formato Unicode nativo di .NET Framework oggetti stringa a ANSI.

## <a name="when-not-to-use-pinvoke"></a>Quando non usare PInvoke

L'utilizzo di PInvoke non è appropriato per tutte le funzioni di tipo C in dll. Si supponga, ad esempio, che esista una funzione MakeSpecial in mylib.dll dichiarata come indicato di seguito:

`char * MakeSpecial(char * pszString);`

Se si utilizza PInvoke in un'applicazione Visual C++, è possibile scrivere qualcosa di simile al seguente:

```cpp
[DllImport("mylib")]
extern "C" String * MakeSpecial([MarshalAs(UnmanagedType::LPStr)] String ^);
```

La difficoltà è che non è possibile eliminare la memoria per la stringa non gestita restituita da MakeSpecial. Altre funzioni chiamate tramite PInvoke restituiscono un puntatore a un buffer interno che non deve essere deallocato dall'utente. In questo caso, l'uso della funzionalità IJW è la scelta più ovvia.

## <a name="limitations-of-pinvoke"></a>Limitazioni di PInvoke

Non è possibile restituire lo stesso puntatore esatto da una funzione nativa che è stata impiegata come parametro. Se una funzione nativa restituisce il puntatore a cui è stato effettuato il marshalling da PInvoke, è possibile che si verifichino danneggiamenti della memoria ed eccezioni.

```cpp
__declspec(dllexport)
char* fstringA(char* param) {
   return param;
}
```

L'esempio seguente mostra questo problema e anche se il programma può sembrare che fornisca l'output corretto, l'output viene restituito dalla memoria che è stata liberata.

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

## <a name="marshaling-arguments"></a>Argomenti di marshalling

Con `PInvoke` , non è necessario alcun marshalling tra i tipi primitivi nativi gestiti e C++ con lo stesso formato. Ad esempio, non è richiesto alcun marshalling tra Int32 e int oppure tra Double e Double.

Tuttavia, è necessario effettuare il marshalling dei tipi che non hanno lo stesso formato. Sono inclusi i tipi char, String e struct. La tabella seguente illustra i mapping usati dal gestore di marshalling per diversi tipi:

|wtypes. h|Visual C++|Visual C++ con/CLR|Common Language Runtime|
|--------------|------------------|-----------------------------|-----------------------------|
|HANDLE|vuoto \*|vuoto \*|IntPtr, UIntPtr|
|BYTE|unsigned char|unsigned char|Byte|
|SHORT|short|short|Int16|
|WORD|unsigned short|unsigned short|UInt16|
|INT|INT|INT|Int32|
|UINT|int senza segno|int senza segno|UInt32|
|LONG|long|long|Int32|
|BOOL|long|bool|Boolean|
|DWORD|unsigned long|unsigned long|UInt32|
|ULONG|unsigned long|unsigned long|UInt32|
|CHAR|char|char|Char|
|LPSTR|char \*|String ^ [in], StringBuilder ^ [in, out]|String ^ [in], StringBuilder ^ [in, out]|
|LPCSTR|carattere const \*|Stringa ^|string|
|LPWSTR|wchar_t \*|String ^ [in], StringBuilder ^ [in, out]|String ^ [in], StringBuilder ^ [in, out]|
|LPCWSTR|const wchar_t \*|Stringa ^|string|
|FLOAT|float|float|Single|
|DOUBLE|double|double|Double|

Il gestore di marshalling blocca automaticamente la memoria allocata nell'heap di runtime se l'indirizzo viene passato a una funzione non gestita. Il blocco impedisce al Garbage Collector di trasferire il blocco di memoria allocato durante la compattazione.

Nell'esempio illustrato in precedenza in questo argomento, il parametro CharSet di DllImport specifica il modo in cui deve essere eseguito il marshalling delle stringhe gestite. in questo caso, è necessario effettuare il marshalling delle stringhe ANSI per il lato nativo.

È possibile specificare le informazioni di marshalling per i singoli argomenti di una funzione nativa utilizzando l'attributo marshalling. Sono disponibili diverse opzioni per il marshalling di un \* argomento stringa: BSTR, AnsiBStr, TBStr, LPSTR, LPWSTR e LPTSTR. Il valore predefinito è LPStr.

In questo esempio viene eseguito il marshalling della stringa come stringa di caratteri Unicode a doppio byte, LPWStr. L'output è la prima lettera del Hello World. Poiché il secondo byte della stringa di cui è stato effettuato il marshalling è null, viene interpretato come il marcatore di fine della stringa.

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

L'attributo Marshales è nello spazio dei nomi System:: Runtime:: InteropServices. L'attributo può essere utilizzato con altri tipi di dati, ad esempio le matrici.

Come indicato in precedenza nell'argomento, la libreria di marshalling fornisce un nuovo metodo ottimizzato per il marshalling dei dati tra ambienti nativi e gestiti. Per ulteriori informazioni, vedere [Cenni preliminari sul marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md).

## <a name="performance-considerations"></a>Considerazioni sulle prestazioni

PInvoke presenta un sovraccarico compreso tra 10 e 30 istruzioni x86 per chiamata. Oltre a questo costo fisso, il marshalling crea un sovraccarico aggiuntivo. Nessun costo di marshalling tra i tipi copiabili con la stessa rappresentazione in codice gestito e non gestito. Ad esempio, non è previsto alcun costo per la conversione tra int e Int32.

Per ottenere prestazioni migliori, disporre di un minor numero di chiamate PInvoke che effettuano il marshalling di più dati possibili, anziché più chiamate che eseguono il marshalling di meno dati per chiamata.

## <a name="see-also"></a>Vedi anche

[Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)
