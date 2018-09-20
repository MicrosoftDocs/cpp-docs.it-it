---
title: Chiamata di funzioni Native da codice gestito | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- native functions called from managed code [C++]
- managed code [C++], interoperability
- platform invoke [C++], interoperability
- interoperabiliy [C++], calling native functions from managed code
- calling native functions from managed code
- interop [C++], calling native functions from managed code
ms.assetid: 982cef18-20d9-42b4-8242-a77fa65f2e36
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 9b65fa8e201788811dbe41a8d4c3cb41bfbf5739
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46408974"
---
# <a name="calling-native-functions-from-managed-code"></a>Chiamata a funzioni native da codice gestito

Common language runtime fornisce Platform Invocation Services, o PInvoke, che consente al codice gestito di chiamare le funzioni di tipo C in librerie native di collegamento dinamico (DLL). Ai fini dell'interoperabilità COM con il runtime e per il meccanismo "It Just Works", o IJW, viene utilizzati i marshalling dei dati stessi.

Per altre informazioni, vedere:

- [Uso esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)

- [Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)

Gli esempi in questa sezione viene illustrato come `PInvoke` può essere utilizzato. `PInvoke` Consente di semplificare il marshalling di dati personalizzati in quanto vengono fornite informazioni di marshalling in modo dichiarativo negli attributi invece di scrivere codice procedurale di marshalling.

> [!NOTE]
>  La libreria del marshalling fornisce un modo alternativo per il marshalling dei dati tra ambienti nativi e gestiti in modo ottimizzato. Visualizzare [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md) per altre informazioni sulla libreria di marshalling. La libreria del marshalling è utilizzabile solo per i dati e non per le funzioni.

## <a name="pinvoke-and-the-dllimport-attribute"></a>PInvoke e l'attributo DllImport

L'esempio seguente illustra l'uso di `PInvoke` in un programma Visual C++. La funzione nativa puts è definita in Msvcrt. dll. L'attributo DllImport è utilizzato per la dichiarazione della funzione puts.

```
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

L'esempio seguente è equivalente all'esempio precedente, ma sull'utilizzo di IJW.

```
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

- Non è necessario scrivere `DLLImport` dichiarazioni per le API non gestite, il programma Usa dell'attributo. Includere il file di intestazione e il collegamento con la libreria di importazione.

- Il meccanismo IJW risulta leggermente più veloce (ad esempio, gli stub IJW non sono necessario verificare la necessità di bloccare o copiare elementi di dati perché viene eseguita in modo esplicito dallo sviluppatore).

- Viene illustrato chiaramente i problemi di prestazioni. In questo caso, il fatto che sta eseguendo la conversione da una stringa Unicode con una stringa ANSI e che si hanno un'allocazione di memoria e la deallocazione. In questo caso, uno sviluppatore che scrive il codice utilizzando IJW dovrebbe comprendere che la chiamata `_putws` e l'utilizzo di `PtrToStringChars` sarebbe meglio per le prestazioni.

- Se si chiama molte API non gestite utilizzando gli stessi dati, effettuarne il marshalling è una sola volta e passando la copia viene eseguito il marshalling è molto più efficiente anziché ripetere ogni volta che il marshalling.

### <a name="disadvantages-of-ijw"></a>Svantaggi di IJW

- Il marshalling deve essere specificato in modo esplicito nel codice anziché dagli attributi (che spesso hanno impostazioni predefinite appropriate).

- Il codice di marshalling è inline, in cui è più invasiva nel flusso della logica dell'applicazione.

- Poiché l'API di marshalling esplicito restituiscono `IntPtr` tipi di portabilità a 32 bit a 64 bit, è necessario usare extra `ToPointer` chiamate.

Il metodo specifico esposto da C++ è il metodo più efficiente, esplicito, aumentando tuttavia alcune complessità aggiuntive.

Se l'applicazione utilizza soprattutto tipi di dati non gestito o se chiama più API non gestite rispetto a API di .NET Framework, è consigliabile utilizzare la funzionalità IJW. Per chiamare un'API non gestita occasionale in un'applicazione prevalentemente gestita, la scelta presenta maggiori difficoltà.

## <a name="pinvoke-with-windows-apis"></a>PInvoke con API Windows

PInvoke risulta utile per la chiamata di funzioni in Windows.

In questo esempio, un programma Visual C++ interagisce con la funzione MessageBox, che fa parte dell'API Win32.

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

L'output è una finestra di messaggio con il titolo PInvoke Test che contiene il testo Hello World!.

Le informazioni di marshalling serve anche da PInvoke per cercare le funzioni nella DLL. In User32. dll non è in realtà alcuna funzione MessageBox, ma CharSet = CharSet:: ANSI consente a PInvoke di utilizzare MessageBoxA, ovvero la versione ANSI, anziché MessageBoxW, che rappresenta la versione Unicode. In generale, è consigliabile utilizzare le versioni Unicode delle API non gestite in quanto che elimina il sovraccarico della conversione dal formato Unicode nativo degli oggetti stringa .NET Framework ad ANSI.

## <a name="when-not-to-use-pinvoke"></a>Quando non usare PInvoke

Tramite PInvoke non è appropriato per tutte le funzioni di tipo C nelle DLL. Ad esempio, se vi è una funzione MakeSpecial in myLib. dll sia dichiarata come segue:

`char * MakeSpecial(char * pszString);`

Se si utilizza PInvoke in un'applicazione Visual C++, è possibile scrivere del codice simile al seguente:

```cpp
[DllImport("mylib")]
extern "C" String * MakeSpecial([MarshalAs(UnmanagedType::LPStr)] String ^);
```

La difficoltà è che non è possibile eliminare la memoria per la stringa non gestita restituita da MakeSpecial. Altre funzioni chiamate tramite PInvoke restituiscono un puntatore a un buffer interno che non deve essere deallocato dall'utente. In questo caso, l'utilizzo della funzionalità IJW è la scelta più ovvia.

## <a name="limitations-of-pinvoke"></a>Limitazioni di PInvoke

È possibile restituire lo stesso identico puntatore da una funzione nativa che è utilizzato come parametro. Se una funzione nativa restituisce il puntatore che è stato effettuato il marshalling a esso tramite PInvoke, potrebbero verificarsi eccezioni e danneggiamento della memoria.

```cpp
__declspec(dllexport)
char* fstringA(char* param) {
   return param;
}
```

L'esempio seguente illustra il problema, e anche se il programma possa sembrare corretto, tale output deriva dalla memoria che è stata liberata.

```
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

Con `PInvoke`, non è necessario eseguire il marshalling tra tipi gestiti e primitivi nativi C++ con lo stesso formato. Ad esempio, non è necessario tra Int32 e int o tra Double e double Nessun marshaling.

Tuttavia, è necessario effettuare il marshalling di tipi che non hanno lo stesso formato. Inclusi i tipi char, string e struct. Nella tabella seguente mostra le associazioni utilizzate dal gestore di marshalling per i vari tipi:

|Wtypes. h|Visual C++|Visual C++ con /clr|Common Language Runtime|
|--------------|------------------|-----------------------------|-----------------------------|
|HANDLE|void \*|void \*|IntPtr, UIntPtr|
|BYTE|unsigned char|unsigned char|Byte|
|SHORT|short|short|Int16|
|WORD|unsigned short|unsigned short|UInt16|
|INT|int|int|Int32|
|UINT|unsigned int|unsigned int|UInt32|
|LONG|long|long|Int32|
|BOOL|long|bool|Booleano|
|DWORD|unsigned long|unsigned long|UInt32|
|ULONG|unsigned long|unsigned long|UInt32|
|CHAR|char|char|Char|
|LPCSTR|Char \*|String ^ [in], oggetto StringBuilder ^ [in, out]|String ^ [in], oggetto StringBuilder ^ [in, out]|
|LPCSTR|char const \*|String ^|Stringa|
|LPWSTR|wchar_t \*|String ^ [in], oggetto StringBuilder ^ [in, out]|String ^ [in], oggetto StringBuilder ^ [in, out]|
|LPCWSTR|wchar_t const \*|String ^|Stringa|
|FLOAT|float|float|Single|
|DOUBLE|double|double|Double|

Il gestore di marshalling blocca automaticamente la memoria allocata nell'heap di runtime se il relativo indirizzo viene passato a una funzione non gestita. Il blocco impedisce al garbage collector di spostare il blocco di memoria allocato durante la compattazione di dati.

Nell'esempio illustrato in precedenza in questo argomento, il parametro CharSet di DllImport specifica come gestito le stringhe di marshalling; In questo caso, è necessario effettuare il marshalling di stringhe ANSI per il lato nativo.

È possibile specificare le informazioni di marshalling relative ai singoli argomenti di una funzione nativa utilizzando l'attributo MarshalAs. Esistono diverse opzioni per il marshalling di una stringa \* argomento: BStr, ANSIBStr, TBStr, LPStr, LPWStr e LPTStr. L'impostazione predefinita è LPStr.

In questo esempio, viene effettuato il marshalling della stringa come stringa di caratteri Unicode a doppio byte, LPWStr. L'output è la prima lettera di Hello World! Poiché il secondo byte della stringa sottoposta a marshalling è null e la funzione puts lo interpreta come marcatore di fine della stringa.

```
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

L'attributo MarshalAs è incluso nello spazio dei nomi. L'attributo può essere utilizzato con altri tipi di dati, ad esempio matrici.

Come accennato in precedenza in questo argomento, la libreria del marshalling fornisce un metodo nuovo e ottimizzato di marshalling dei dati tra ambienti nativi e gestiti. Per altre informazioni, vedere [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md).

## <a name="performance-considerations"></a>Considerazioni sulle prestazioni

PInvoke ha un overhead di compreso tra 10 e 30 x86 istruzioni per ogni chiamata. Oltre a questo costo fisso, il marshalling crea un ulteriore sovraccarico. Non sono previsti costi di marshalling tra tipi copiabili da blt contenenti la stessa rappresentazione in codice gestito e gestito. Ad esempio, non sono previsti costi per la conversione tra int e Int32.

Per ottenere prestazioni migliori, hanno un numero inferiore di chiamate PInvoke che il marshalling di quanti più dati possibile, invece di numerose chiamate che il marshalling di dati inferiore per ogni chiamata.

## <a name="see-also"></a>Vedere anche

[Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)