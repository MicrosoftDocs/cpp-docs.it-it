---
title: "Memorizzazione di stringhe in un provider OLE DB | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "record utente, modifica"
ms.assetid: 36cb9635-067c-4cad-8f85-962f28026f6a
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Memorizzazione di stringhe in un provider OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Tramite la Creazione guidata provider OLE DB ATL viene creato in MyProviderRS.h un record utente predefinito denominato `CWindowsFile`.  Per gestire le due stringhe è necessario modificare `CWindowsFile` oppure aggiungere un record utente personalizzato, come illustrato nel codice riportato di seguito.  
  
```  
////////////////////////////////////////////////////////////////////////  
class CAgentMan:   
   public WIN32_FIND_DATA  
   DWORD dwBookmark;              // Add this  
   TCHAR szCommand[256];          // Add this  
   TCHAR szText[256];             // Add this  
   TCHAR szCommand2[256];         // Add this  
   TCHAR szText2[256];            // Add this  
  
{  
public:  
BEGIN_PROVIDER_COLUMN_MAP()  
   PROVIDER_COLUMN_ENTRY_STR(OLESTR("Command"), 1, 256, GUID_NULL, CAgentMan, szCommand)  
   PROVIDER_COLUMN_ENTRY_STR(OLESTR("Text"), 2, 256, GUID_NULL, CAgentMan, szText)   
   PROVIDER_COLUMN_ENTRY_STR(OLESTR("Command2"), 3, 256, GUID_NULL, CAgentMan, szCommand2)  
   PROVIDER_COLUMN_ENTRY_STR(OLESTR("Text2"),4, 256, GUID_NULL, CAgentMan, szText2)  
END_PROVIDER_COLUMN_MAP()  
   bool operator==(const CAgentMan& am) // This is optional   
   {  
      return (lstrcmpi(cFileName, wf.cFileName) == 0);  
   }  
};  
```  
  
 I membri dati `szCommand` and `szText` rappresentano le due stringhe, mentre `szCommand2` e `szText2` forniscono le ulteriori colonne, se necessarie.  Il membro dati `dwBookmark` non è necessario per questo provider semplice in sola lettura, ma verrà utilizzato in seguito per aggiungere un'interfaccia `IRowsetLocate`. Per ulteriori informazioni, vedere [Miglioramento di un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md).  L'operatore `==` confronta le istanze. L'implementazione di questo operatore è facoltativa.  
  
 Al termine di questa operazione, sarà possibile compilare ed eseguire il provider.  Per eseguire il test del provider, è necessario un consumer con funzionalità corrispondenti.  Per informazioni su come creare un consumer di test, vedere [Implementazione di un consumer semplice](../../data/oledb/implementing-a-simple-consumer.md).  Eseguire il consumer di test con il provider.  Verificare che il consumer di test recuperi le stringhe corrette dal provider quando si fa clic sul pulsante **Run** nella finestra di dialogo **Test Consumer**.  
  
 Dopo aver verificato il corretto funzionamento del provider, sarà possibile migliorarne le funzionalità implementando ulteriori interfacce.  Un esempio di questa operazione è illustrato in [Miglioramento di un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md).  
  
## Vedere anche  
 [Implementazione di un provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md)