---
title: Chiamata di funzioni Native da codice gestito | Documenti Microsoft
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
ms.openlocfilehash: c0d7e69c95790122f44dc59d06f2843afbddfb2c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33112043"
---
# <a name="calling-native-functions-from-managed-code"></a>Chiamata a funzioni native da codice gestito
Common language runtime fornisce servizi di Platform Invoke o PInvoke, che consente al codice gestito di chiamare le funzioni di tipo C in librerie native di collegamento dinamico (DLL). Ai fini dell'interoperabilità COM con il runtime e per il meccanismo di "It Just Works", o IJW, viene utilizzato il marshalling dei dati stessi.  
  
 Per altre informazioni, vedere:  
  
-   [Uso esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)  
  
-   [Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)  
  
-   [Informazioni dettagliate su platform invoke](http://msdn.microsoft.com/en-us/ba9dd55b-2eaa-45cd-8afd-75cb8d64d243)  
  
 Gli esempi in questa sezione vengono illustrate le modalità `PInvoke` può essere utilizzato. `PInvoke` Consente di semplificare il marshalling dei dati personalizzati in quanto vengono fornite informazioni sul marshalling in modo dichiarativo negli attributi invece di scrivere codice di marshalling procedurale.  
  
> [!NOTE]
>  La libreria del marshalling fornisce un modo alternativo per il marshalling dei dati tra ambienti nativi e gestiti in modo ottimizzato. Vedere [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md) per ulteriori informazioni sulla libreria di marshalling. La libreria del marshalling è utilizzabile solo per i dati e non per le funzioni.  
  
## <a name="pinvoke-and-the-dllimport-attribute"></a>PInvoke e l'attributo DllImport  
 Nell'esempio seguente viene illustrato come utilizzare `PInvoke` in un programma Visual C++. La funzione nativa puts è definita in Msvcrt. L'attributo DllImport viene utilizzato per la dichiarazione di PUT.  
  
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
  
 L'esempio seguente è equivalente all'esempio precedente, ma Usa IJW.  
  
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
  
-   Non è necessario scrivere `DLLImport` dichiarazioni per le API non gestite, il programma utilizza dell'attributo. Includere il file di intestazione e un collegamento alla libreria di importazione.  
  
-   Il meccanismo IJW è leggermente più veloce (ad esempio, gli stub IJW non è necessario verificare la necessità di pin o la copia elementi di dati, perché viene eseguita in modo esplicito dallo sviluppatore).  
  
-   Illustra in modo chiaro i problemi di prestazioni. In questo caso, il fatto che la conversione da una stringa Unicode in una stringa ANSI e che si dispone di un'allocazione di memoria e la deallocazione. In questo caso, uno sviluppatore di scrivere il codice utilizzando IJW dovrebbe comprendere che la chiamata `_putws` e l'utilizzo di `PtrToStringChars` sarebbe migliore per le prestazioni.  
  
-   Se si chiamano molte API non gestite utilizzando gli stessi dati, il marshalling di una volta e passando la copia viene eseguito il marshalling è molto più efficiente rispetto marshalling nuovamente ogni volta.  
  
### <a name="disadvantages-of-ijw"></a>Svantaggi di IJW  
  
-   Marshalling deve essere specificato in modo esplicito nel codice anziché dagli attributi, che spesso hanno valori predefiniti appropriati.  
  
-   Il codice di marshalling è inline, in cui è più invasivo nel flusso della logica dell'applicazione.  
  
-   Poiché le API di marshalling esplicito restituiscono `IntPtr` tipi per la portabilità di 32 bit a 64 bit, è necessario utilizzare extra `ToPointer` chiamate.  
  
 Il metodo specifico esposto da C++ è il metodo più efficiente, aumentando tuttavia alcune complessità aggiuntive.  
  
 Se l'applicazione utilizza soprattutto i tipi di dati non gestiti o chiama più API non gestite di API di .NET Framework, è consigliabile utilizzare la funzionalità IJW. Per chiamare un'API non gestita occasionale in un'applicazione gestita per lo più, la scelta è più complesso.  
  
## <a name="pinvoke-with-windows-apis"></a>PInvoke con API Windows  
 PInvoke risulta utile per chiamare le funzioni in Windows.  
  
 In questo esempio, un programma Visual C++ interagisce con la funzione MessageBox che fa parte dell'API Win32.  
  
```  
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
  
 Le informazioni di marshalling sono utilizzate anche da PInvoke per cercare le funzioni nella DLL. In User32. dll non è in realtà nessuna funzione MessageBox, ma CharSet = CharSet:: ANSI consente PInvoke utilizzare MessageBoxA, la versione ANSI, anziché MessageBoxW, che rappresenta la versione Unicode. In generale, è consigliabile utilizzare le versioni Unicode delle API non gestite in quanto che elimina la traslazione overhead dal formato Unicode nativo degli oggetti di .NET Framework stringa ANSI.  
  
## <a name="when-not-to-use-pinvoke"></a>Quando evitare l'utilizzo di PInvoke  
 Tramite PInvoke non è appropriato per tutte le funzioni di tipo C in una DLL. Ad esempio, se vi è una funzione MakeSpecial in myLib dichiarata come segue:  
  
 `char * MakeSpecial(char * pszString);`  
  
 Se si utilizza PInvoke in un'applicazione Visual C++, è possibile scrivere qualcosa di simile al seguente:  
  
 `[DllImport("mylib")]`  
  
 `extern "C" String * MakeSpecial([MarshalAs(UnmanagedType::LPStr)] String ^);`  
  
 La difficoltà qui è che non è possibile eliminare la memoria per la stringa non gestita restituita da MakeSpecial. Altre funzioni chiamate tramite PInvoke restituiscono un puntatore a un buffer interno che non deve essere deallocato dall'utente. In questo caso, l'utilizzo della funzionalità IJW è la scelta ovvia.  
  
## <a name="limitations-of-pinvoke"></a>Limitazioni di PInvoke  
 È possibile restituire lo stesso identico puntatore da una funzione nativa che è stata eseguita come un parametro. Se una funzione nativa restituisce il puntatore che è stato effettuato il marshalling a esso da PInvoke, potrebbero verificarsi eccezioni e il danneggiamento della memoria.  
  
```  
__declspec(dllexport)  
char* fstringA(char* param) {  
   return param;  
}  
```  
  
 L'esempio seguente illustra il problema e, anche se il programma possa sembrare l'output corretto, l'output proviene dalla memoria che è stata liberata.  
  
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
 Con `PInvoke`, non è necessario alcun marshalling tra tipi gestiti e primitivi nativi C++ con lo stesso formato. Ad esempio, non è necessario il marshalling tra Int32 e int o tra Double e double.  
  
 Tuttavia, è necessario effettuare il marshalling di tipi che non hanno lo stesso formato. Inclusi i tipi char, string e struct. La tabella seguente illustra le associazioni utilizzate dal gestore di marshalling per vari tipi:  
  
|Wtypes. h|Visual C++|Visual C++ con /clr|Common Language Runtime|  
|--------------|------------------|-----------------------------|-----------------------------|  
|HANDLE|void *|void *|IntPtr, UIntPtr|  
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
|LPCSTR|Char *|Stringa ^ [in], oggetto StringBuilder ^ [in, out]|Stringa ^ [in], oggetto StringBuilder ^ [in, out]|  
|LPCSTR|const char *|String ^|Stringa|  
|LPWSTR|wchar_t *|Stringa ^ [in], oggetto StringBuilder ^ [in, out]|Stringa ^ [in], oggetto StringBuilder ^ [in, out]|  
|LPCWSTR|const wchar_t *|String ^|Stringa|  
|FLOAT|float|float|Single|  
|DOUBLE|double|double|Double|  
  
 Il gestore di marshalling blocca automaticamente la memoria allocata nell'heap di runtime se il relativo indirizzo viene passato a una funzione non gestita. Il blocco impedisce al garbage collector di spostare il blocco di memoria allocato durante la compattazione.  
  
 Nell'esempio illustrato in precedenza in questo argomento, il parametro del set di caratteri di DllImport specifica le stringhe come gestite deve essere sottoposto a marshalling; In questo caso, è necessario effettuare il marshalling di stringhe ANSI per il lato nativo.  
  
 È possibile specificare le informazioni di marshalling per i singoli argomenti di una funzione nativa utilizzando l'attributo MarshalAs. Sono disponibili numerose opzioni per il marshalling di una stringa * argomento: BStr, ANSIBStr, TBStr, LPStr, LPWStr e LPTStr. Il valore predefinito è LPStr.  
  
 In questo esempio, la stringa viene sottoposto a marshalling come una stringa di caratteri Unicode a byte doppio, LPWStr. L'output è la prima lettera di Hello World! Poiché è null, il secondo byte della stringa di marshalling e di inserisce lo interpreta come marcatore di fine della stringa.  
  
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
  
 L'attributo MarshalAs è nello spazio dei nomi System::Runtime::InteropServices. L'attributo può essere utilizzato con altri tipi di dati, ad esempio matrici.  
  
 Come accennato in precedenza in questo argomento, la libreria di marshalling offre un metodo nuovo e ottimizzato il marshalling dei dati tra ambienti nativi e gestiti. Per ulteriori informazioni, vedere [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md).  
  
## <a name="performance-considerations"></a>Considerazioni sulle prestazioni  
 PInvoke presenta un overhead di compreso tra 10 e 30 x86 istruzioni per ogni chiamata. Oltre a questo costo fisso, effettuare il marshalling crea un ulteriore sovraccarico. Non sono previsti costi marshalling tra tipi copiabili che presentano la stessa rappresentazione nel codice gestito e non gestito. Non è ad esempio, costi aggiuntivi per la conversione tra int e Int32.  
  
 Per ottenere prestazioni migliori, hanno un numero inferiore di chiamate PInvoke che effettuare il marshalling come quantità di dati possibile, invece di più chiamate minore quantità di dati per ogni chiamata di effettuare il marshalling.  
  
## <a name="see-also"></a>Vedere anche  
 [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)