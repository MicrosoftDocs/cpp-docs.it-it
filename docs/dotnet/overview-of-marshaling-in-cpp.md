---
title: Panoramica del marshalling in C++ | Documenti Microsoft
ms.custom: ''
ms.date: 06/28/2018
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- marshaling
- marshalling
dev_langs:
- C++
helpviewer_keywords:
- Visual C++, marshaling
- C++ Support Library, marshaling
- marshaling, about marshaling
ms.assetid: 997dd4bc-5f98-408f-b890-f35de9ce3bb8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 76f6721ce4561e9c2b4323fef9c2eed3231f73cb
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37079160"
---
# <a name="overview-of-marshaling-in-c"></a>Panoramica del marshalling in C++
In modalità mista, è talvolta necessario effettuare il marshalling dei dati tra i tipi nativi e gestiti. Visual Studio 2008 introdotti il *libreria del marshalling* consentono effettuare il marshalling e convertire i dati in un modo semplice.  La libreria del marshalling è costituito da un set di funzioni e `marshal_context` (classe) che eseguono il marshalling dei tipi più comuni. La libreria è definita in queste intestazioni nel **includono/msclr** directory per l'edizione di Visual Studio:

|Header|Descrizione|  
|---------------|-----------------|
|Marshal. h|`marshal_context` classe e le funzioni marshalling privo di contesto|
|marshal_atl. h| Funzioni per il marshalling dei tipi di ATL|
|marshal_cppstd. h|Funzioni per il marshalling dei tipi C++ standard|
|marshal_windows. h|Funzioni per il marshalling dei tipi di Windows|


Il percorso predefinito per **msclr** cartella è simile al seguente a seconda di quale edizione è e il numero di build:

```cmd
C:\\Program Files (x86)\\Microsoft Visual Studio\\Preview\\Enterprise\\VC\\Tools\\MSVC\\14.15.26528\\include\\msclr
```

 È possibile utilizzare la libreria del marshalling con o senza un [classe marshal_context](../dotnet/marshal-context-class.md). Alcune conversioni richiedono un contesto. Altre conversioni possono essere implementati utilizzando la [marshal_as](../dotnet/marshal-as.md) (funzione). La tabella seguente vengono illustrate le conversioni corrente è supportate se richiedono un contesto e il file di marshalling è necessario includere:  
  
|Da tipo|Al tipo|Metodo di marshalling|file di inclusione|  
|---------------|-------------|--------------------|------------------|  
|System:: String ^|const char *|marshal_context|Marshal. h|  
|const char *|System:: String ^|marshal_as|Marshal. h|  
|Char *|System:: String ^|marshal_as|Marshal. h|  
|System:: String ^|const wchar_t*|marshal_context|Marshal. h|  
|const wchar_t *|System:: String ^|marshal_as|Marshal. h|  
|wchar_t *|System:: String ^|marshal_as|Marshal. h|  
|System:: IntPtr|HANDLE|marshal_as|marshal_windows. h|  
|HANDLE|System:: IntPtr|marshal_as|marshal_windows. h|  
|System:: String ^|BSTR|marshal_context|marshal_windows. h|  
|BSTR|System:: String ^|marshal_as|Marshal. h|  
|System:: String ^|bstr_t|marshal_as|marshal_windows. h|  
|bstr_t|System:: String ^|marshal_as|marshal_windows. h|  
|System:: String ^|std:: String|marshal_as|marshal_cppstd. h|  
|std:: String|System:: String ^|marshal_as|marshal_cppstd. h|  
|System:: String ^|std:: wstring|marshal_as|marshal_cppstd. h|  
|std:: wstring|System:: String ^|marshal_as|marshal_cppstd. h|  
|System:: String ^|CStringT\<char >|marshal_as|marshal_atl. h|  
|CStringT\<char >|System:: String ^|marshal_as|marshal_atl. h|  
|System:: String ^|CStringT < wchar_t >|marshal_as|marshal_atl. h|  
|CStringT < wchar_t >|System:: String ^|marshal_as|marshal_atl. h|  
|System:: String ^|CComBSTR|marshal_as|marshal_atl. h|  
|CComBSTR|System:: String ^|marshal_as|marshal_atl. h|  
  
 Marshalling richiede un contesto solo quando si effettua il marshalling dei dati gestiti a nativo tipi e il tipo nativo che si sta convertendo non dispone di un distruttore per automatico di pulizia. Il contesto di marshalling elimina definitivamente il tipo di dati nativo allocato nel proprio distruttore. Pertanto, le conversioni che richiedono un contesto sarà valide solo fino a quando non viene eliminato il contesto. Per salvare tutti i valori per il marshalling, è necessario copiare i valori a variabili personalizzate.  
  
> [!NOTE]
>  Se non è stato incorporato `NULL`s nella stringa, il risultato del marshalling della stringa non è garantito. L'oggetto incorporato `NULL`può causare la stringa può essere troncato o potrebbero essere mantenute.  
  
Questo esempio mostra come includere la directory msclr in una dichiarazione di intestazione include:  
  
 `#include "msclr\marshal_cppstd.h"`  
  
 La libreria del marshalling è estensibile, in modo che è possibile aggiungere tipi di marshalling. Per ulteriori informazioni sull'estensione la libreria di marshalling, vedere [procedura: estendere la libreria del marshalling](../dotnet/how-to-extend-the-marshaling-library.md).  
  
 Nelle versioni precedenti, è Impossibile effettuare il marshalling dei dati utilizzando [PInvoke](/dotnet/framework/interop/consuming-unmanaged-dll-functions). Per ulteriori informazioni `PInvoke`, vedere [chiamata a funzioni Native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di supporto per C++](../dotnet/cpp-support-library.md)   
 [Procedura: Estendere la libreria del marshalling](../dotnet/how-to-extend-the-marshaling-library.md)
