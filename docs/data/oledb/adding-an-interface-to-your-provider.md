---
title: "Aggiunta di un&#39;interfaccia al provider | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modelli del provider OLE DB, interfacce oggetto"
ms.assetid: b0fc7cf8-428a-4584-9d64-ce9074d0eb66
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Aggiunta di un&#39;interfaccia al provider
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determinare a quale oggetto si desidera aggiungere l'interfaccia. In genere l'interfaccia viene aggiunta a oggetti DataSource, Rowset, Command o Session creati tramite la Creazione guidata provider OLE DB ATL.  È possibile che l'oggetto a cui si desidera aggiungere l'interfaccia non sia supportato dal provider.  In tal caso eseguire la Creazione guidata provider OLE DB ATL per creare l'oggetto.  Fare clic con il pulsante destro del mouse sul progetto in Visualizzazione classi, scegliere **Aggiungi classe** dal menu **Aggiungi**, quindi **Provider OLE DB ATL**.  È possibile inserire il codice dell'interfaccia in una directory separata, quindi copiare i file nel progetto del provider.  
  
 Se si è creata una nuova classe per il supporto dell'interfaccia, l'oggetto dovrà ereditare da tale classe.  È ad esempio possibile aggiungere la classe **IRowsetIndexImpl** a un oggetto Rowset:  
  
```  
template <class Creator>  
class CAgentRowset :   
public CRowsetImpl< CAgentRowset<Creator>, CAgentMan, Creator>,  
   public IRowsetIndexImpl< ... >   
```  
  
 Aggiungere l'interfaccia a **COM\_MAP** dell'oggetto utilizzando la macro COM\_INTERFACE\_ENTRY.  Se non è presente alcuna mappa, crearne una.  Di seguito è riportato un esempio.  
  
```  
BEGIN_COM_MAP(CAgentRowset)  
     COM_INTERFACE_ENTRY(IRowsetIndex)  
END_COM_MAP()  
```  
  
 Per l'oggetto Rowset eseguire la concatenazione con la mappa dell'oggetto padre in modo che l'oggetto possa delegare alla classe padre.  In questo esempio viene aggiunta la macro COM\_INTERFACE\_ENTRY\_CHAIN alla mappa:  
  
```  
BEGIN_COM_MAP(CAgentRowset)  
     COM_INTERFACE_ENTRY(IRowsetIndex)  
     COM_INTERFACE_ENTRY_CHAIN(CRowsetImpl)  
END_COM_MAP()  
```  
  
## Vedere anche  
 [Utilizzo dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)