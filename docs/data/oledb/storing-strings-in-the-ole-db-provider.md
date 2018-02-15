---
title: L'archiviazione delle stringhe nel Provider OLE DB | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- user records, editing
ms.assetid: 36cb9635-067c-4cad-8f85-962f28026f6a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 523193d7fa5f18d3d0956d39ca68cdc5d34131b0
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="storing-strings-in-the-ole-db-provider"></a>Memorizzazione di stringhe in un provider OLE DB
In MyProviderRS. H, la creazione guidata Provider OLE DB ATL crea un record utente predefinito denominato `CWindowsFile`. Per gestire le due stringhe, modificare `CWindowsFile` o aggiungere un record utente personalizzato, come illustrato nel codice seguente:  
  
```cpp
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
  
 I membri dati `szCommand` e `szText` rappresentano le due stringhe, con `szCommand2` e `szText2` forniscono le ulteriori colonne, se necessario. Il membro dati `dwBookmark` non è necessaria per questo provider semplice in sola lettura, ma viene utilizzato in un secondo momento per aggiungere un `IRowsetLocate` interfaccia, vedere [miglioramento di un Provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md). Il `==` operatore confronta le istanze (implementazione di questo operatore è facoltativo).  
  
 Al termine, il provider deve essere possibile compilare ed eseguire. Per testare il provider, è necessario un consumer con funzionalità di corrispondenza. [Implementazione di un Consumer semplice](../../data/oledb/implementing-a-simple-consumer.md) viene illustrato come creare un consumer di test. Eseguire il consumer di test con il provider. Verificare che il consumer di test consente di recuperare le stringhe corrette dal provider quando si fa clic il **eseguire** pulsante il **Test Consumer** la finestra di dialogo.  
  
 Quando si è verificato il corretto funzionamento del provider, è consigliabile migliorare le funzionalità implementando le interfacce aggiuntive. Viene illustrato un esempio [miglioramento di un Provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione di un provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md)