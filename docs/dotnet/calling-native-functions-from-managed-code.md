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
ms.openlocfilehash: 0cdd5db4fae8d9167fa9ab1aeb6a4e8cbfe76ded
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372516"
---
# <a name="calling-native-functions-from-managed-code"></a>Chiamata a funzioni native da codice gestito

Common Language Runtime fornisce Platform Invocation Services, o PInvoke, che consente al codice gestito di chiamare funzioni di tipo C in librerie native a collegamento dinamico (DLL). Lo stesso marshalling dei dati viene utilizzato per l'interoperabilità COM con il runtime e per il meccanismo "It Just Works" o IJW.

Per altre informazioni, vedere:

- [Uso esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)

- [Utilizzo delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)

Gli esempi in questa `PInvoke` sezione illustrano solo come può essere utilizzato. `PInvoke`può semplificare il marshalling dei dati personalizzato perché si forniscono informazioni di marshalling in modo dichiarativo negli attributi anziché scrivere codice di marshalling procedurale.

> [!NOTE]
> La libreria del marshalling fornisce un modo alternativo per effettuare il marshalling dei dati tra ambienti nativi e gestiti in modo ottimizzato. Per ulteriori informazioni sulla libreria del marshalling, vedere Cenni preliminari sul [Marshalling in C.](../dotnet/overview-of-marshaling-in-cpp.md) La libreria di marshalling è utilizzabile solo per i dati e non per le funzioni.

## <a name="pinvoke-and-the-dllimport-attribute"></a>PInvoke e l'attributo DllImport

Nell'esempio riportato `PInvoke` di seguito viene illustrato l'utilizzo di in un programma di Visual C. La funzione nativa puts è definita in msvcrt.dll. L'attributo DllImport viene utilizzato per la dichiarazione di puts.

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

The following sample is equivalent to the previous sample, but uses IJW.

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

- Non è necessario `DLLImport` scrivere dichiarazioni di attributo per le API non gestite utilizzate dal programma. È sufficiente includere il file di intestazione e collegarlo alla libreria di importazione.

- Il meccanismo IJW è leggermente più veloce (ad esempio, gli stub IJW non è necessario verificare la necessità di aggiungere o copiare elementi di dati perché questa operazione viene eseguita in modo esplicito dallo sviluppatore).

- Illustra chiaramente i problemi di prestazioni. In questo caso, il fatto che si sta traducendo da una stringa Unicode a una stringa ANSI e che si dispone di un'allocazione di memoria e deallocazione. In questo caso, uno sviluppatore che scrive il `_putws` codice `PtrToStringChars` utilizzando IJW si renderebbe conto che la chiamata e l'utilizzo sarebbe migliore per le prestazioni.

- Se si chiamano molte API non gestite usando gli stessi dati, il marshalling una sola volta e il passaggio della copia di cui è stato eseguito il marshalling è molto più efficiente rispetto al re-marshaling ogni volta.

### <a name="disadvantages-of-ijw"></a>Svantaggi di IJW

- Il marshalling deve essere specificato in modo esplicito nel codice anziché in base agli attributi (che spesso hanno valori predefiniti appropriati).

- Il codice di marshalling è inline, dove è più invasivo nel flusso della logica dell'applicazione.

- Poiché le API di `IntPtr` marshalling esplicito restituiscono i tipi per la portabilità da 32 a 64 bit, è necessario utilizzare chiamate aggiuntive. `ToPointer`

Il metodo specifico esposto da C , è il metodo più efficiente ed esplicito, a costo di una complessità aggiuntiva.

Se l'applicazione utilizza principalmente tipi di dati non gestiti o se chiama più API non gestite rispetto alle API di .NET Framework, è consigliabile usare la funzionalità IJW. Per chiamare un'API occasionale non gestita in un'applicazione per lo più gestita, la scelta è più sottile.

## <a name="pinvoke-with-windows-apis"></a>PInvoke con API di Windows

PInvoke è utile per chiamare le funzioni in Windows.

In questo esempio, un programma di Visual C, interagisce con la funzione MessageBox che fa parte dell'API Win32.

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

L'output è una finestra di messaggio con il titolo PInvoke Test e contiene il testo Hello World!.

Le informazioni di marshalling vengono utilizzate anche da PInvoke per cercare funzioni nella DLL. In user32.dll non è in realtà alcuna funzione MessageBox, ma CharSet-CharSet::Ansi consente a PInvoke di utilizzare MessageBoxA, la versione ANSI, anziché MessageBoxW, che è la versione Unicode. In generale, è consigliabile utilizzare versioni Unicode di API non gestite perché ciò elimina l'overhead di conversione dal formato Unicode nativo degli oggetti stringa di .NET Framework in ANSI.

## <a name="when-not-to-use-pinvoke"></a>Quando non utilizzare PInvoke

L'utilizzo di PInvoke non è appropriato per tutte le funzioni di tipo C nelle DLL. Si supponga, ad esempio, che in mylib.dll sia presente una funzione makeSpecial dichiarata come segue:

`char * MakeSpecial(char * pszString);`

Se si utilizza PInvoke in un'applicazione di Visual C, è possibile scrivere qualcosa di simile al seguente:

```cpp
[DllImport("mylib")]
extern "C" String * MakeSpecial([MarshalAs(UnmanagedType::LPStr)] String ^);
```

La difficoltà è che non è possibile eliminare la memoria per la stringa non gestita restituita da MakeSpecial. Altre funzioni chiamate tramite PInvoke restituiscono un puntatore a un buffer interno che non deve essere deallocato dall'utente. In questo caso, l'utilizzo della funzione IJW è la scelta più ovvia.

## <a name="limitations-of-pinvoke"></a>Limitazioni di PInvoke

Non è possibile restituire lo stesso puntatore esatto da una funzione nativa che è stato preso come parametro. Se una funzione nativa restituisce il puntatore di cui è stato eseguito il marshalling da PInvoke, potrebbe verificarsi il danneggiamento della memoria e le eccezioni.

```cpp
__declspec(dllexport)
char* fstringA(char* param) {
   return param;
}
```

L'esempio seguente presenta questo problema e anche se il programma può sembrare dare l'output corretto, l'output proviene dalla memoria che era stata liberata.

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

## <a name="marshaling-arguments"></a>Argomenti di marshallingMarshaling Arguments

Con `PInvoke`, non è necessario alcun marshalling tra i tipi primitivi nativi gestiti e c'è con lo stesso formato. Ad esempio, non è necessario alcun marshalling tra Int32 e int o tra Double e double.

Tuttavia, è necessario eseguire il marshalling di tipi che non hanno lo stesso formato. Sono inclusi i tipi char, string e struct. Nella tabella seguente vengono illustrati i mapping utilizzati dal gestore di marshalling per vari tipi:

|wtypes.h|Visual C++|Visual C|Common Language Runtime|
|--------------|------------------|-----------------------------|-----------------------------|
|HANDLE|Vuoto\*|Vuoto\*|IntPtr, UIntPtr|
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
|LPSTR|Char\*|Stringa [in], StringBuilder [in, out]|Stringa [in], StringBuilder [in, out]|
|LPCSTR|const char\*|Proprietà String .|string|
|LPWSTR|Wchar_t\*|Stringa [in], StringBuilder [in, out]|Stringa [in], StringBuilder [in, out]|
|LPCWSTR|const wchar_t \*|Proprietà String .|string|
|FLOAT|float|float|Single|
|DOUBLE|double|double|Double|

Il gestore di marshalling blocca automaticamente la memoria allocata nell'heap di runtime se il relativo indirizzo viene passato a una funzione non gestita. Il blocco impedisce al Garbage Collector di spostare il blocco di memoria allocato durante la compattazione.

Nell'esempio illustrato in precedenza in questo argomento, il parametro CharSet di DllImport specifica la modalità di marshalling delle stringhe gestite. in questo caso, devono essere sottoposti a marshalling in stringhe ANSI per il lato nativo.

È possibile specificare le informazioni di marshalling per i singoli argomenti di una funzione nativa utilizzando l'attributo MarshalAs. Esistono diverse opzioni per il \* marshalling di un argomento String: BStr, ANSIBStr, TBStr, LPStr, LPWStr e LPTStr. Il valore predefinito è LPStr.

In questo esempio, viene eseguito il marshalling della stringa come stringa di caratteri Unicode a byte doppio, LPWStr. L'output è la prima lettera di Hello World! perché il secondo byte della stringa sottoposta a marshalling è null e inserisce questo come il marcatore di fine stringa.

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

L'attributo MarshalAs si trova nello spazio dei nomi System::Runtime::InteropServices. L'attributo può essere utilizzato con altri tipi di dati, ad esempio matrici.

Come accennato in precedenza nell'argomento, la libreria del marshalling fornisce un nuovo metodo ottimizzato per il marshalling dei dati tra ambienti nativi e gestiti. Per ulteriori informazioni, vedere Cenni preliminari [sul marshalling in C.](../dotnet/overview-of-marshaling-in-cpp.md)

## <a name="performance-considerations"></a>Considerazioni sulle prestazioni

PInvoke ha un sovraccarico compreso tra 10 e 30 x86 istruzioni per chiamata. Oltre a questo costo fisso, il marshalling crea un sovraccarico aggiuntivo. Non esiste alcun costo di marshalling tra i tipi blittable che hanno la stessa rappresentazione nel codice gestito e non gestito. Ad esempio, non vi è alcun costo per la conversione tra int e Int32.

Per migliorare le prestazioni, disporre di un numero inferiore di chiamate PInvoke che esegua il marshalling della maggior quantità possibile di dati, anziché di un numero maggiore di chiamate che evitano meno dati per chiamata.

## <a name="see-also"></a>Vedere anche

[Interoperabilità nativa e .NET](../dotnet/native-and-dotnet-interoperability.md)
