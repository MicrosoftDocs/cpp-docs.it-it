---
title: Modifica in una tabella di tasti di scelta rapida | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- accelerator tables [C++], editing
- keyboard shortcuts [C++], editing in an accelerator table
ms.assetid: 545b650b-4f26-4b20-8431-d942548443bd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b0844ab8a4233e2204c42a8d165309c89026fb01
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39646228"
---
# <a name="editing-in-an-accelerator-table"></a>Modifica in una tabella dei tasti di scelta rapida
### <a name="to-edit-in-an-accelerator-table"></a>Per eseguire una modifica in una tabella dei tasti di scelta rapida  
  
1.  Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Selezionare una voce nella tabella e fare clic per attivare la modifica sul posto.  
  
3.  Eseguire la selezione dalla casella combinata a discesa oppure digitare sul posto per apportare modifiche.  
  
    -   Per la [ID](id-property.md), selezionarlo dall'elenco o digitarlo per apportare modifiche.  
  
    -   Per la [modificatore](../windows/accelerator-modifier-property.md)selezionare dall'elenco.  
  
    -   Per la [chiave](../windows/accelerator-key-property.md), selezionarlo dall'elenco o digitarlo per apportare modifiche.  
  
    -   Per la [tipo](../windows/accelerator-type-property.md), selezionare **ASCII** oppure **VIRTKEY** dall'elenco.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*.  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica delle tabelle di tasti di scelta rapida](../windows/editing-accelerator-tables.md)   
 [Editor tasti di scelta rapida](../windows/accelerator-editor.md)