---
title: Panoramica del marshalling in C++
ms.date: 06/28/2018
ms.topic: reference
f1_keywords:
- marshaling
- marshalling
helpviewer_keywords:
- Visual C++, marshaling
- C++ Support Library, marshaling
- marshaling, about marshaling
ms.assetid: 997dd4bc-5f98-408f-b890-f35de9ce3bb8
ms.openlocfilehash: 9e3b8f561ce6609eb2afedb527a16c4803f69c53
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62384738"
---
# <a name="overview-of-marshaling-in-c"></a>Panoramica del marshalling in C++

In modalità mista, è talvolta necessario effettuare il marshalling dei dati tra i tipi gestiti e nativi. Visual Studio 2008 introdotti il *libreria di marshalling* per consentire effettuare il marshalling e convertire i dati in un modo semplice.  La libreria del marshalling è costituito da un set di funzioni e una `marshal_context` classi che eseguono il marshalling dei tipi più comuni. La libreria è definita in queste intestazioni nel **msclrincludono/** directory per l'edizione di Visual Studio:

|Intestazione|Descrizione|
|---------------|-----------------|
|marshal.h|`marshal_context` classi e funzioni di marshalling privi di contesto|
|marshal_atl.h| Funzioni per il marshalling dei tipi di ATL|
|marshal_cppstd.h|Funzioni per il marshalling dei tipi C++ standard|
|marshal_windows.h|Funzioni per il marshalling dei tipi di Windows|

Il percorso predefinito per **msclr** cartelle sono simile al seguente a seconda di quale edizione è necessario e il numero di build:

```cmd
C:\\Program Files (x86)\\Microsoft Visual Studio\\Preview\\Enterprise\\VC\\Tools\\MSVC\\14.15.26528\\include\\msclr
```

È possibile usare la libreria del marshalling con o senza un [marshal_context Class](../dotnet/marshal-context-class.md). Alcune conversioni richiedono un contesto. Le altre conversioni possono essere implementate usando il [marshal_as](../dotnet/marshal-as.md) (funzione). La tabella seguente elenca le conversioni corrente è supportate se richiedono un contesto e quali file di marshalling è necessario includere:

|Da tipo|Al tipo|Effettuare il marshalling (metodo)|File di inclusione|
|---------------|-------------|--------------------|------------------|
|System:: String ^|char const \*|marshal_context|marshal.h|
|char const \*|System:: String ^|marshal_as|marshal.h|
|Char \*|System:: String ^|marshal_as|marshal.h|
|System:: String ^|wchar_t const\*|marshal_context|marshal.h|
|wchar_t const \*|System:: String ^|marshal_as|marshal.h|
|wchar_t \*|System:: String ^|marshal_as|marshal.h|
|System::IntPtr|HANDLE|marshal_as|marshal_windows.h|
|HANDLE|System::IntPtr|marshal_as|marshal_windows.h|
|System:: String ^|BSTR|marshal_context|marshal_windows.h|
|BSTR|System:: String ^|marshal_as|marshal.h|
|System:: String ^|bstr_t|marshal_as|marshal_windows.h|
|bstr_t|System:: String ^|marshal_as|marshal_windows.h|
|System:: String ^|std::string|marshal_as|marshal_cppstd.h|
|std::string|System:: String ^|marshal_as|marshal_cppstd.h|
|System:: String ^|std::wstring|marshal_as|marshal_cppstd.h|
|std::wstring|System:: String ^|marshal_as|marshal_cppstd.h|
|System:: String ^|CStringT\<char>|marshal_as|marshal_atl.h|
|CStringT\<char>|System:: String ^|marshal_as|marshal_atl.h|
|System:: String ^|CStringT<wchar_t>|marshal_as|marshal_atl.h|
|CStringT<wchar_t>|System:: String ^|marshal_as|marshal_atl.h|
|System:: String ^|CComBSTR|marshal_as|marshal_atl.h|
|CComBSTR|System:: String ^|marshal_as|marshal_atl.h|

Marshalling richiede un contesto solo quando si effettua il marshalling di dati gestito a nativo tipi e il tipo nativo che si sta convertendo ha un distruttore per automatico di pulizia. Il contesto di marshalling elimina definitivamente il tipo di dati nativo allocati nel relativo distruttore. Di conseguenza, le conversioni che richiedono un contesto sarà valide solo fino a quando non viene eliminato il contesto. Per salvare i valori per il marshalling, è necessario copiare i valori a variabili personalizzate.

> [!NOTE]
>  Se non è stato incorporato `NULL`s nella stringa, il risultato del marshalling della stringa non è garantito. L'oggetto incorporato `NULL`s può causare la stringa da troncare o potrebbero essere mantenute.

In questo esempio mostra come includere la directory msclr in una dichiarazione di intestazione include:

`#include "msclr\marshal_cppstd.h"`

La libreria del marshalling è estensibile, in modo che sia possibile aggiungere i tipi di marshalling. Per altre informazioni sull'estensione della libreria del marshalling, vedere [come: Estendere la libreria del marshalling](../dotnet/how-to-extend-the-marshaling-library.md).

Nelle versioni precedenti, è possibile il marshalling dei dati mediante [Platform Invoke](/dotnet/framework/interop/consuming-unmanaged-dll-functions). Per altre informazioni sulle `PInvoke`, vedere [chiamata a funzioni Native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md).

## <a name="see-also"></a>Vedere anche

[Libreria di supporto per C++](../dotnet/cpp-support-library.md)<br/>
[Procedura: Estendere la libreria del marshalling](../dotnet/how-to-extend-the-marshaling-library.md)
