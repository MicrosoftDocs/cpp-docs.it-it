---
title: Panoramica del marshalling in C++ | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 1f950c8efbdd75e16096d158075e92594fb6b2d1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33137134"
---
# <a name="overview-of-marshaling-in-c"></a>Panoramica del marshalling in C++
In modalità mista, è talvolta necessario effettuare il marshalling dei dati tra i tipi nativi e gestiti. [!INCLUDE[vs_orcas_long](../atl/reference/includes/vs_orcas_long_md.md)] introdotta per la libreria del marshalling effettuare il marshalling e convertire i dati in un modo semplice.  
  
 È possibile utilizzare la libreria del marshalling con o senza un [classe marshal_context](../dotnet/marshal-context-class.md). Alcune conversioni richiedono un contesto. Altre conversioni possono essere implementati utilizzando la [marshal_as](../dotnet/marshal-as.md) (funzione). La tabella seguente elenca le conversioni corrente è supportate se richiedono un contesto e il file di marshalling è necessario includere:  
  
|Da tipo|Al tipo|Metodo di marshalling|File di inclusione|  
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
  
 Marshalling richiede un contesto solo quando si effettua il marshalling dei dati gestiti a nativo tipi e il tipo nativo che si sta convertendo non dispone di un distruttore per automatico di pulizia. Il contesto di marshalling elimina definitivamente il tipo di dati nativo allocato nel proprio distruttore. Pertanto, le conversioni che richiedono un contesto saranno più valide solo fino a quando non viene eliminato il contesto. Per salvare tutti i valori per il marshalling, è necessario copiare i valori a variabili personalizzate.  
  
> [!NOTE]
>  Se non è stato incorporato `NULL`s nella stringa, il risultato del marshalling della stringa non è garantito. L'oggetto incorporato `NULL`può causare la stringa può essere troncato o potrebbero essere mantenute.  
  
 Le intestazioni della libreria di marshalling si trovano nella directory di inclusione nella sottodirectory msclr. In questo esempio viene illustrato come includere la directory msclr in una dichiarazione di intestazione include:  
  
 `#include "msclr\marshal_cppstd.h"`  
  
 La libreria del marshalling è estensibile, in modo che è possibile aggiungere tipi di marshalling. Per ulteriori informazioni sull'estensione della libreria del marshalling, vedere [procedura: estendere la libreria del marshalling](../dotnet/how-to-extend-the-marshaling-library.md).  
  
 Nelle versioni precedenti, è Impossibile effettuare il marshalling dei dati tramite [Platform Invoke](/dotnet/framework/interop/consuming-unmanaged-dll-functions). Per ulteriori informazioni su `PInvoke`, vedere [chiamata a funzioni Native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di supporto per C++](../dotnet/cpp-support-library.md)   
 [Procedura: Estendere la libreria del marshalling](../dotnet/how-to-extend-the-marshaling-library.md)