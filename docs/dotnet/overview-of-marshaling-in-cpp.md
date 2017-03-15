---
title: "Panoramica del marshaling in C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "marshaling"
  - "marshalling"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "libreria di supporto per C++, marshalling"
  - "marshalling, informazioni sul marshalling"
  - "Visual C++, marshalling"
ms.assetid: 997dd4bc-5f98-408f-b890-f35de9ce3bb8
caps.latest.revision: 16
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Panoramica del marshaling in C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella modalità mista, talvolta è necessario effettuare il marshalling dei dati tra tipi nativi e tipi gestiti.  [!INCLUDE[vs_orcas_long](../atl/reference/includes/vs_orcas_long_md.md)] ha introdotto la libreria di marshalling per aiutare ad effettuare il marshalling e convertire i dati in modo semplice.  
  
 È possibile utilizzare la libreria del marshalling con o senza [Classe marshal\_context](../dotnet/marshal-context-class.md).  Alcune conversioni richiedono un contesto.  Altre conversioni possono essere implementate mediante la funzione [marshal\_as](../dotnet/marshal-as.md).  Nella tabella seguente sono elencate le correnti conversioni supportate, se richiedono un contesto e che file marshal è necessario includere:  
  
|Dal tipo|Al tipo|Metodo del marshalling|Include file|  
|--------------|-------------|----------------------------|------------------|  
|System::String^|const char \*|marshal\_context|marshal.h|  
|const char \*|System::String^|marshal\_as|marshal.h|  
|char\*|System::String^|marshal\_as|marshal.h|  
|System::String^|const wchar\_t\*|marshal\_context|marshal.h|  
|const wchar\_t \*|System::String^|marshal\_as|marshal.h|  
|wchar\_t\*|System::String^|marshal\_as|marshal.h|  
|System::IntPtr|HANDLE|marshal\_as|marshal\_windows.h|  
|HANDLE|System::IntPtr|marshal\_as|marshal\_windows.h|  
|System::String^|BSTR|marshal\_context|marshal\_windows.h|  
|BSTR|System::String^|marshal\_as|marshal.h|  
|System::String^|bstr\_t|marshal\_as|marshal\_windows.h|  
|bstr\_t|System::String^|marshal\_as|marshal\_windows.h|  
|System::String^|std::string|marshal\_as|marshal\_cppstd.h|  
|std::string|System::String^|marshal\_as|marshal\_cppstd.h|  
|System::String^|std::wstring|marshal\_as|marshal\_cppstd.h|  
|std::wstring|System::String^|marshal\_as|marshal\_cppstd.h|  
|System::String^|CStringT\<char\>|marshal\_as|marshal\_atl.h|  
|CStringT\<char\>|System::String^|marshal\_as|marshal\_atl.h|  
|System::String^|CStringT\<wchar\_t\>|marshal\_as|marshal\_atl.h|  
|CStringT\<wchar\_t\>|System::String^|marshal\_as|marshal\_atl.h|  
|System::String^|CComBSTR|marshal\_as|marshal\_atl.h|  
|CComBSTR|System::String^|marshal\_as|marshal\_atl.h|  
  
 Il marshalling richiede un contesto solo quando si effettua il marshalling da codice gestito a tipi di dati nativi e il tipo nativo che si sta convertendo non ha un distruttore per eseguire la pulizia automatica.  Il contesto di marshalling elimina il tipo di dati nativo allocato nel distruttore.  Di conseguenza, le conversioni che richiedono un contesto sono valide solo finché non verrà eliminato il contesto.  Per salvare tutti i valori sottoposti a marshalling, è necessario copiare i valori nelle variabili.  
  
> [!NOTE]
>  Se si sono incorporati valori `NULL` nella stringa, il risultato del marshalling della stringa non è garantito.  Valori `NULL` incorporati possono causare il troncamento della stringa o che vengano mantenuti.  
  
 Le intestazioni della libreria del marshalling si trovano nella directory di inclusione nella sottodirectory del msclr.  In questo esempio viene illustrato come includere la directory msclr in una dichiarazione di intestazione di inclusione:  
  
 `#include "msclr\marshal_cppstd.h"`  
  
 La libreria del marshalling è estensibile così si possono aggiungere i propri tipi di marshalling.  Per ulteriori informazioni sull'estensione della libreria del marshalling, vedere [Procedura: estendere la libreria del marshalling](../dotnet/how-to-extend-the-marshaling-library.md).  
  
 Nelle versioni precedenti, è possibile eseguire il marshalling dei dati utilizzando [Platform invoke](../Topic/Consuming%20Unmanaged%20DLL%20Functions.md).  Per ulteriori informazioni su `PInvoke`, vedere [Chiamata a funzioni native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md).  
  
## Vedere anche  
 [Libreria di supporto per C\+\+](../dotnet/cpp-support-library.md)   
 [Procedura: estendere la libreria del marshalling](../dotnet/how-to-extend-the-marshaling-library.md)