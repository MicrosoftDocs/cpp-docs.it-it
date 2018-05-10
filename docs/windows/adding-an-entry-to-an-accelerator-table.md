---
title: Aggiunta di una voce a una tabella di tasti di scelta rapida | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- accelerator tables [C++], adding entries
- New Accelerator command
ms.assetid: 559c2415-8323-4339-9447-6966665f8288
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 22f3e00c8ba6523f6cc615e4a766ad9206560b5e
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="adding-an-entry-to-an-accelerator-table"></a>Aggiunta di una voce a una tabella dei tasti di scelta rapida
### <a name="to-add-an-entry-to-an-accelerator-table"></a>Per aggiungere una voce a una tabella dei tasti di scelta rapida  
  
1.  Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona in [visualizzazione risorse](../windows/resource-view-window.md).  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Fare doppio clic all'interno della tabella di tasti di scelta rapida e scegliere **nuovo tasto di scelta rapida** dal menu di scelta rapida o fare clic sulla riga vuota nella parte inferiore della tabella.  
  
3.  Selezionare un [ID](id-property.md) dall'elenco a discesa nell'ID casella o digitare un nuovo ID nella **ID** casella.  
  
4.  Tipo di [chiave](../windows/accelerator-key-property.md) si desidera utilizzare come un tasto di scelta rapida o il pulsante destro del mouse e scegliere **digita** dal menu di scelta rapida per impostare una combinazione di tasti (il **digita** comando disponibile anche la **modifica** menu).  
  
5.  Modifica il [modificatore](../windows/accelerator-modifier-property.md) e [tipo](../windows/accelerator-type-property.md), se necessario.  
  
6.  Premere **INVIO**.  
  
    > [!NOTE]
    >  Verificare che tutti gli acceleratori definiti siano univoci. È possibile che diverse combinazioni di tasti siano assegnate allo stesso ID senza che vi siano problemi, ad esempio, CTRL + P e F8 possono entrambi essere assegnati a ID_PRINT. Tuttavia, l'assegnazione di una combinazione di tasti a più ID non è compatibile, ad esempio, CTRL + Z assegnato a ID_SPELL_CHECK che a ID_THESAURUS.  
  

  
 **Requisiti**  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica delle tabelle di tasti di scelta rapida](../windows/editing-accelerator-tables.md)   
 [Editor tasti di scelta rapida](../windows/accelerator-editor.md)