---
title: "Proprietà chiave di tasti di scelta rapida | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: Key property
ms.assetid: d1570cd9-b414-4cd6-96bd-47c38281eaca
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 97b1101b735ca95d1040e51d13e1134d56c2fb9b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="accelerator-key-property"></a>Proprietà Key dei tasti di scelta rapida
Di seguito sono ammessi per la proprietà chiave della tabella di tasti di scelta rapida:  
  
-   Numero intero compreso tra 0 e 255 in formato decimale. Il valore determina se il valore viene trattato come ASCII o ANSI come indicato di seguito:  
  
    -   Numeri a una cifra vengono sempre interpretati come la chiave corrispondente, anziché come valori ASCII o ANSI.  
  
    -   Valori da 1 a 26, preceduti da zero, vengono interpretati come ^ A ^ Z, che rappresenta il valore ASCII delle lettere dell'alfabeto pressione con tenuto premuto CTRL.  
  
    -   I valori da 27 a 32 vengono sempre interpretati come valori decimali a tre cifre 027 e 032.  
  
    -   I valori da 033 a 255, preceduto da 0 o non vengono interpretati come valori ANSI.  
  
-   Un singolo carattere della tastiera. Caratteri maiuscoli A - Z o i numeri 0 - 9 ASCII o valori di chiave virtuali. qualsiasi altro carattere è ASCII.  
  
-   Un carattere singolo compreso nell'intervallo A - Z (lettere solo), preceduto da un accento circonflesso (^) (ad esempio ^ C). Questo passa il valore ASCII della chiave quando viene premuto con il tasto CTRL premuto.  
  
    > [!NOTE]
    >  Quando si immette un valore ASCII, le opzioni di proprietà modificatore sono limitate. L'unica chiave di controllo disponibile per l'utilizzo è il tasto ALT.  
  
-   Qualsiasi identificatore di tasto virtuale valido. La casella di riepilogo a discesa chiave nella tabella di tasti di scelta rapida contiene un elenco di identificatori di tasto virtuale standard.  
  
    > [!TIP]
    >  Un altro modo per definire un tasto di scelta rapida è possibile fare doppio clic su una o più voci nella tabella di tasti di scelta rapida scegliere **digita** dal menu di scelta rapida e quindi premere una delle chiavi o combinazioni di tasti sulla tastiera. Il **digita** comando è anche disponibile il **modifica** menu.  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle proprietà dei tasti di scelta rapida](../windows/setting-accelerator-properties.md)   
 [Modifica in una tabella di tasti di scelta rapida](../windows/editing-in-an-accelerator-table.md)   
 [Editor tasti di scelta rapida](../windows/accelerator-editor.md)