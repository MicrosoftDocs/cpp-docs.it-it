---
title: "Aggiunta di una proprietà al controllo (ATL esercitazione, parte 3) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
ms.assetid: f775fe34-103b-4f07-9999-400e987ee030
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: f9bd5890dbe73cfcd99b2c3b37a25618775f592e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="adding-a-property-to-the-control-atl-tutorial-part-3"></a>Aggiunta di una proprietà al controllo (Esercitazione di ATL, parte 3)
`IPolyCtl`l'interfaccia che contiene i metodi del controllo personalizzato e le proprietà e si aggiungerà una proprietà.  
  
### <a name="to-add-a-property-using-the-add-property-wizard"></a>Per aggiungere una proprietà tramite l'aggiunta guidata proprietà  
  
1.  In visualizzazione classi, il ramo del poligono.  
  
2.  Fare clic sulla IPolyCtl.  
  
3.  Menu di scelta rapida, fare clic su **Aggiungi**, quindi fare clic su **Aggiungi proprietà**.  
  
     Verrà visualizzata l'aggiunta guidata proprietà.  
  
4.  Nell'elenco a discesa dei tipi di proprietà, selezionare `SHORT`.  
  
5.  Tipo `Sides` come il **nome della proprietà.**  
  
6.  Fare clic su **fine** per completare l'aggiunta della proprietà.  
  
 Quando si aggiunge la proprietà per l'interfaccia, MIDL (il programma che consente di compilare il file. idl) definisce un `Get` metodo per recuperare il relativo valore e un `Put` metodo per l'impostazione di un nuovo valore. I metodi vengono denominati anteponendo `put_` e `get_` al nome della proprietà.  
  
 L'aggiunta guidata proprietà aggiunge le righe necessarie per il file IDL. Aggiunge inoltre la `Get` e `Put` alla definizione della classe in PolyCtl prototipi di funzione e aggiunge un'implementazione vuota a PolyCtl. È possibile verificare tale aprendo PolyCtl e cercando le funzioni `get_Sides` e `put_Sides`.  
  
 Anche se ora si dispongono di funzioni di base per impostare e recuperare la proprietà, è necessario che una posizione da archiviare. Si creerà una variabile per archiviare la proprietà e aggiornare di conseguenza le funzioni.  
  
#### <a name="to-create-a-variable-to-store-the-property-and-update-the-put-and-get-methods"></a>Per creare una variabile per archiviare la proprietà e aggiornare il put e ai metodi get  
  
1.  Da Esplora soluzioni, aprire PolyCtl e aggiungere la riga seguente dopo la definizione di `m_clrFillColor`:  
  
     [!code-cpp[NVC_ATL_Windowing#44](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_1.h)]  
  
2.  Impostare il valore predefinito di `m_nSides`. Impostare come predefinito un triangolo come forma aggiungendo una riga al costruttore in PolyCtl. H:  
  
     [!code-cpp[NVC_ATL_Windowing#45](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_2.h)]  
  
3.  Implementare il `Get` e `Put` metodi. Il `get_Sides` e `put_Sides` le dichiarazioni di funzione sono state aggiunte a PolyCtl. Sostituire il codice in PolyCtl per `get_Sides` e `put_Sides` con il codice seguente:  
  
     [!code-cpp[NVC_ATL_Windowing#46](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_3.cpp)]  
  
 Il `get_Sides` metodo restituisce il valore corrente del `Sides` proprietà tramite il `pVal` puntatore. Nel `put_Sides` metodo, il codice di verifica l'impostazione di `Sides` proprietà con un valore valido. Il valore minimo deve essere 2, poiché verrà utilizzata una matrice di punti per ogni lato, 100 è un limite ragionevole per un valore massimo.  
  
 Ora è una proprietà denominata `Sides`. Nel passaggio successivo, si modificherà il codice di disegno per poterlo utilizzare.  
  
 [Al passaggio 2](../atl/adding-a-control-atl-tutorial-part-2.md) &#124; [Al passaggio 4](../atl/changing-the-drawing-code-atl-tutorial-part-4.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Esercitazione](../atl/active-template-library-atl-tutorial.md)

