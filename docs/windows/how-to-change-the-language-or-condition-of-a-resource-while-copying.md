---
title: 'Procedura: modificare la lingua o condizione di una risorsa durante la copia | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.resvw.resource.changing
dev_langs:
- C++
helpviewer_keywords:
- Language property
- condition property of resource
ms.assetid: 8f622ab0-bac2-468f-ae70-78911afc4759
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b3ad3ef6acb06eaef04197dc4ecffe27c2d7656d
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39650215"
---
# <a name="how-to-change-the-language-or-condition-of-a-resource-while-copying"></a>Procedura: modificare la lingua o la condizione di una risorsa durante la copia
Durante la copia in una risorsa, è possibile modificarne la proprietà relativa alla lingua o alla condizione oppure entrambe.  
  
-   La lingua della risorsa identifica semplicemente la lingua relativa alla risorsa, Viene utilizzato da [FindResource](http://msdn.microsoft.com/library/windows/desktop/ms648042) per consentire di identificare la risorsa per cui si sta cercando. Le risorse tuttavia possono presentare per ciascuna lingua differenze non riguardanti il testo, come nel caso di tasti di scelta rapida funzionanti solo su una tastiera giapponese, di una bitmap appropriata solo per compilazioni in lingua cinese e così via.  
  
-   La condizione di una risorsa è un simbolo definito che identifica una condizione in cui è necessario usare questa particolare copia della risorsa.  
  
 La lingua e la condizione di una risorsa vengono visualizzate tra parentesi dopo il nome della risorsa nella finestra Area di lavoro. Nell'esempio che segue, la risorsa denominata IDD_AboutBox usa come lingua il finlandese e la condizione è XX33.  
  
```cpp  
IDD_AboutBox (Finnish - XX33)  
```  
  
### <a name="to-copy-an-existing-resource-and-change-its-language-or-condition"></a>Per copiare una risorsa esistente e modificarne la lingua e la condizione  
  
1.  Nel file RC o nella [visualizzazione risorse](../windows/resource-view-window.md) finestra, fare doppio clic la risorsa a cui si desidera copiare.  
  
2.  Scegli **Inserisci copia** dal menu di scelta rapida.  
  
3.  Nel **Inserisci copia risorsa** nella finestra di dialogo:  
  
    -   Per il **linguaggio** elenco a discesa, selezionare la lingua.  
  
    -   Nel **condizione** , digitare la condizione.  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: copiare risorse](../windows/how-to-copy-resources.md)   
 [File di risorse](../windows/resource-files-visual-studio.md)   
 [Editor di risorse](../windows/resource-editors.md)