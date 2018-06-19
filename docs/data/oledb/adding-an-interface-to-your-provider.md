---
title: Aggiunta di un'interfaccia al Provider | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB provider templates, object interfaces
ms.assetid: b0fc7cf8-428a-4584-9d64-ce9074d0eb66
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 3d6bc5d1b6c47d2ffa26bffa98d47b930d6ed193
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33093546"
---
# <a name="adding-an-interface-to-your-provider"></a>Aggiunta di un'interfaccia al provider
Determinare quale oggetto a cui si desidera aggiungere l'interfaccia a (in genere dati origine, il set di righe, comando o sessione oggetti creati dalla creazione guidata Provider OLE DB). È possibile che l'oggetto che è necessario aggiungere l'interfaccia sia quello che attualmente non supporta il provider. In tal caso, eseguire la creazione guidata Provider OLE DB ATL per creare l'oggetto. Fare clic sul progetto in visualizzazione classi, fare clic su **Aggiungi classe** dal **Aggiungi** menu e quindi fare clic su **Provider OLE DB ATL**. È possibile inserire il codice dell'interfaccia in una directory distinta e quindi copiare i file di progetto del provider.  
  
 Se è stata creata una nuova classe per supportare l'interfaccia, rendere l'oggetto di ereditare da quella classe. Ad esempio, è possibile aggiungere la classe **IRowsetIndexImpl** a un oggetto set di righe:  
  
```cpp  
template <class Creator>  
class CAgentRowset :   
    public CRowsetImpl< CAgentRowset<Creator>, CAgentMan, Creator>,  
    public IRowsetIndexImpl< ... >   
```  
  
 Aggiungere l'interfaccia **COM_MAP** nell'oggetto tramite la macro COM_INTERFACE_ENTRY. Se è disponibile alcuna mappa, crearne uno. Ad esempio:  
  
```cpp  
BEGIN_COM_MAP(CAgentRowset)  
     COM_INTERFACE_ENTRY(IRowsetIndex)  
END_COM_MAP()  
```  
  
 Per l'oggetto set di righe, catena la mappa dell'elemento padre dell'oggetto in modo che sia possibile delegare l'oggetto alla classe padre. In questo esempio, aggiungere la macro COM_INTERFACE_ENTRY_CHAIN alla mappa:  
  
```cpp  
BEGIN_COM_MAP(CAgentRowset)  
     COM_INTERFACE_ENTRY(IRowsetIndex)  
     COM_INTERFACE_ENTRY_CHAIN(CRowsetImpl)  
END_COM_MAP()  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Uso dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)