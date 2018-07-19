---
title: Aggiunta di una proprietà al controllo (esercitazione, parte 3 di ATL) | Microsoft Docs
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: f775fe34-103b-4f07-9999-400e987ee030
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7cbfb0b22579aceb5cbee196e3c5eda3079c9304
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37848717"
---
# <a name="adding-a-property-to-the-control-atl-tutorial-part-3"></a>Aggiunta di una proprietà al controllo (Esercitazione di ATL, parte 3)
`IPolyCtl` l'interfaccia che contiene i metodi di controllo personalizzato e le proprietà e verrà aggiunta una proprietà.  
  
### <a name="to-add-a-property-using-the-add-property-wizard"></a>Per aggiungere una proprietà tramite l'aggiunta guidata proprietà  
  
1.  In visualizzazione classi, il ramo del poligono.  
  
2.  Fare doppio clic su IPolyCtl.  
  
3.  Nel menu di scelta rapida, fare clic su **Add**, quindi fare clic su **Aggiungi proprietà**.  
  
     Verrà visualizzata l'aggiunta guidata proprietà.  
  
4.  Nell'elenco a discesa dei tipi di proprietà, selezionare `SHORT`.  
  
5.  Tipo di *lati* come la **nome della proprietà.**  
  
6.  Fare clic su **fine** per completare l'aggiunta della proprietà.  
  
 Quando si aggiunge la proprietà all'interfaccia, MIDL (il programma che viene compilato il file con estensione idl) definisce un `Get` metodo per recuperare il relativo valore e un `Put` metodo per impostare un nuovo valore. I metodi sono denominati anteponendo `put_` e `get_` al nome della proprietà.  
  
 L'aggiunta guidata proprietà aggiunge righe necessarie per il file con estensione idl. Aggiunge anche il `Get` e `Put` funzione prototipi alla definizione della classe in PolyCtl. H e aggiunge un'implementazione vuota PolyCtl. È possibile verificarlo, aprire PolyCtl e cercando le funzioni `get_Sides` e `put_Sides`.  
  
 Anche se ora si dispone di funzioni di base per impostare e recuperare la proprietà, è necessario che una posizione da archiviare. Si creerà una variabile per archiviare la proprietà e aggiornare di conseguenza le funzioni.  
  
#### <a name="to-create-a-variable-to-store-the-property-and-update-the-put-and-get-methods"></a>Per creare una variabile per archiviare la proprietà e aggiornare il put e metodi get  
  
1.  Da Esplora soluzioni, aprire PolyCtl. H e aggiungere la riga seguente dopo la definizione di `m_clrFillColor`:  
  
     [!code-cpp[NVC_ATL_Windowing#44](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_1.h)]  
  
2.  Impostare il valore predefinito di `m_nSides`. Impostare come predefinito un triangolo come forma mediante l'aggiunta di una riga del costruttore in PolyCtl. H:  
  
     [!code-cpp[NVC_ATL_Windowing#45](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_2.h)]  
  
3.  Implementare il `Get` e `Put` metodi. Il `get_Sides` e `put_Sides` dichiarazioni di funzione sono stati aggiunti a PolyCtl. H. Sostituire il codice in PolyCtl. per `get_Sides` e `put_Sides` con il codice seguente:  
  
     [!code-cpp[NVC_ATL_Windowing#46](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_3.cpp)]  
  
 Il `get_Sides` metodo viene restituito il valore corrente del `Sides` proprietà tramite la `pVal` puntatore. Nel `put_Sides` metodo, il codice verifica l'impostazione di `Sides` proprietà su un valore accettabile. Il valore minimo deve essere 3, e poiché verrà utilizzata una matrice di punti per ogni lato, 100 è un ragionevole limite per un valore massimo.  
  
 Ora è una proprietà denominata `Sides`. Nel passaggio successivo, si modificherà il codice di disegno per usarlo.  
  
 [Tornare al passaggio 2](../atl/adding-a-control-atl-tutorial-part-2.md) &#124; [al passaggio 4](../atl/changing-the-drawing-code-atl-tutorial-part-4.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Esercitazione](../atl/active-template-library-atl-tutorial.md)

