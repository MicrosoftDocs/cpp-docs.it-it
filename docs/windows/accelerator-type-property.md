---
title: "Proprietà del tipo di acceleratore | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Type property
- VIRTKEY
ms.assetid: 8c349bc4-e6ad-43fa-959e-f29168af35b8
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 214d8ca9c45a3657215833764268794b152bd337
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="accelerator-type-property"></a>Proprietà Type dei tasti di scelta rapida
Tasto di scelta rapida **tipo** proprietà determina se la combinazione di tasti di scelta rapida associata all'ID di tasti di scelta rapida è una combinazione di tasti virtuali oppure un valore di chiave ASCII/ANSI:  
  
-   Se il **tipo** proprietà è **ASCII**, [modificatore](../windows/accelerator-modifier-property.md) può solo essere None o Alt, oppure è possibile disporre di un tasto di scelta rapida che utilizza il tasto CTRL (specificato anteponendo la chiave con un ^).  
  
-   Se il **tipo** proprietà **VIRTKEY**, qualsiasi combinazione di valori di modifica e la chiave è valida.  
  
    > [!NOTE]
    >  Se si desidera immettere un valore nella tabella di tasti di scelta rapida e deve essere considerato come ASCII/ANSI, semplicemente scegliere il tipo per la voce nella tabella ASCII selezionare dall'elenco a discesa. Tuttavia, se si utilizza il **digita** comando (**modifica** menu) per specificare la chiave, è necessario modificare il **tipo** proprietà da VIRTKEY in ASCII *prima* immettendo il codice di chiave.  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle proprietà dei tasti di scelta rapida](../windows/setting-accelerator-properties.md)   
 [Editor tasti di scelta rapida](../windows/accelerator-editor.md)