---
title: 'Procedura: modificare la lingua o condizione di una risorsa durante la copia | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.resvw.resource.changing
dev_langs:
- C++
helpviewer_keywords:
- Language property
- condition property of resource
ms.assetid: 8f622ab0-bac2-468f-ae70-78911afc4759
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3655366e8851494482e628b9c260c796df3f64bd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-change-the-language-or-condition-of-a-resource-while-copying"></a>Procedura: modificare la lingua o la condizione di una risorsa durante la copia
Durante la copia in una risorsa, è possibile modificarne la proprietà relativa alla lingua o alla condizione oppure entrambe.  
  
-   La lingua della risorsa identifica semplicemente la lingua relativa alla risorsa, Viene utilizzato da [FindResource](http://msdn.microsoft.com/library/windows/desktop/ms648042) per identificare la risorsa per cui si sta cercando. Le risorse tuttavia possono presentare per ciascuna lingua differenze non riguardanti il testo, come nel caso di tasti di scelta rapida funzionanti solo su una tastiera giapponese, di una bitmap appropriata solo per compilazioni in lingua cinese e così via.  
  
-   La condizione di una risorsa è un simbolo definito che identifica una condizione in cui è necessario usare questa particolare copia della risorsa.  
  
 La lingua e la condizione di una risorsa vengono visualizzate tra parentesi dopo il nome della risorsa nella finestra Area di lavoro. Nell'esempio che segue, la risorsa denominata IDD_AboutBox usa come lingua il finlandese e la condizione è XX33.  
  
```  
IDD_AboutBox (Finnish - XX33)  
```  
  
### <a name="to-copy-an-existing-resource-and-change-its-language-or-condition"></a>Per copiare una risorsa esistente e modificarne la lingua e la condizione  
  
1.  Nel file RC o nella [visualizzazione risorse](../windows/resource-view-window.md) finestra, la risorsa a cui si desidera copiare destro.  
  
2.  Scegliere **Inserisci copia** dal menu di scelta rapida.  
  
3.  Nel **Inserisci copia risorsa** la finestra di dialogo:  
  
    -   Per il **Language** nella casella di riepilogo, selezionare la lingua.  
  
    -   Nel **condizione** , digitare la condizione.  
  

  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: copiare risorse](../windows/how-to-copy-resources.md)   
 [File di risorse](../windows/resource-files-visual-studio.md)   
 [Editor di risorse](../windows/resource-editors.md)