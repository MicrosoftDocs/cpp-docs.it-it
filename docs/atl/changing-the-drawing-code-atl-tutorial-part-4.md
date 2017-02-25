---
title: "Modifica del codice del disegno (Esercitazione di ATL, parte 4) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ATL_MIN_CRT (macro)"
ms.assetid: 08ff14e8-aa49-4139-a110-5d071939cf1e
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Modifica del codice del disegno (Esercitazione di ATL, parte 4)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per impostazione predefinita, il codice di disegno del controllo viene visualizzato un quadrato e il testo **PolyCtl**.  In questo passaggio, verrà modificato il codice per visualizzare un nome più efficaci.  Le seguenti attività interessate:  
  
-   Modificare il file di intestazione  
  
-   Modificare la funzione `OnDraw`  
  
-   Aggiunta di un metodo per calcolare i punti del poligono  
  
-   Inizializzare il colore di riempimento  
  
## Modificare il file di intestazione  
 L'inizio aggiunta del supporto per le funzioni matematiche `sin` e `cos`, che verranno utilizzati calcola i punti del poligono e creando una matrice per archiviare le posizioni.  
  
#### Per modificare il file di intestazione  
  
1.  Aggiungere la riga `#include <math.h>` all'inizio di PolyCtl.h.  La parte superiore del file deve essere:  
  
     [!code-cpp[NVC_ATL_Windowing#47](../atl/codesnippet/CPP/changing-the-drawing-code-atl-tutorial-part-4_1.cpp)]  
  
2.  Una volta che i punti del poligono viene calcolata, verranno archiviati in una matrice di tipo `POINT`, in modo da aggiungere la matrice dopo la definizione `m_nSides` in PolyCtl.h:  
  
     [!code-cpp[NVC_ATL_Windowing#48](../atl/codesnippet/CPP/changing-the-drawing-code-atl-tutorial-part-4_2.h)]  
  
## Modificare il metodo di OnDraw  
 Ora è necessario modificare il metodo `OnDraw` in PolyCtl.h.  Il codice che si crea una nuova penna e pennello con cui disegnare il poligono e quindi chiama le funzioni `Polygon` e `Ellipse` API Win32 per eseguire il disegno effettivo.  
  
#### Per modificare la funzione di OnDraw  
  
1.  Sostituire il metodo esistente `OnDraw` in PolyCtl.h con il codice seguente:  
  
     [!code-cpp[NVC_ATL_Windowing#49](../atl/codesnippet/CPP/changing-the-drawing-code-atl-tutorial-part-4_3.cpp)]  
  
## Aggiunta di un metodo per calcolare i punti del poligono  
 Aggiungere un metodo, chiamato `CalcPoints`, che calcolerà le coordinate di punti che costituiscono il perimetro del poligono.  Questi calcoli si basano sulla variabile RECT passato alla funzione.  
  
#### Per aggiungere il metodo di CalcPoints  
  
1.  Aggiungere la dichiarazione `CalcPoints` la sezione pubblica `IPolyCtl` della classe `CPolyCtl` in PolyCtl.h:  
  
     [!code-cpp[NVC_ATL_Windowing#50](../atl/codesnippet/CPP/changing-the-drawing-code-atl-tutorial-part-4_4.h)]  
  
     L'ultima parte della sezione pubblica della classe `CPolyCtl` risulterà simile alla seguente:  
  
     [!code-cpp[NVC_ATL_Windowing#51](../atl/codesnippet/CPP/changing-the-drawing-code-atl-tutorial-part-4_5.h)]  
  
2.  Aggiungere questa implementazione della funzione `CalcPoints` alla fine di PolyCtl.cpp:  
  
     [!code-cpp[NVC_ATL_Windowing#52](../atl/codesnippet/CPP/changing-the-drawing-code-atl-tutorial-part-4_6.cpp)]  
  
## Inizializzare il colore di riempimento  
 Inizializzare `m_clrFillColor` con un colore predefinito.  
  
#### Per inizializzare il colore di riempimento  
  
1.  Utilizzare il verde come colore predefinito aggiungere questa riga nel costruttore `CPolyCtl` in PolyCtl.h:  
  
     [!code-cpp[NVC_ATL_Windowing#53](../atl/codesnippet/CPP/changing-the-drawing-code-atl-tutorial-part-4_7.h)]  
  
 Gli aspetti del costruttore sarà la seguente:  
  
 [!code-cpp[NVC_ATL_Windowing#54](../atl/codesnippet/CPP/changing-the-drawing-code-atl-tutorial-part-4_8.h)]  
  
## Compilazione e test il controllo  
 Ricompilare il controllo.  Assicurarsi che il file PolyCtl.htm venga chiuso se è ancora aperto e quindi fare clic **Poligono compilazione** il menu **Compilazione**.  È possibile visualizzare nuovamente il controllo dalla pagina PolyCtl.htm, ma questo utilizzo di compilazione del controllo ActiveX control Test Container.  
  
#### Per utilizzare il controllo ActiveX control Test Container  
  
1.  Compilare e avviare il controllo ActiveX control Test Container.  Per ulteriori informazioni, vedere [Esempio TSTCON: ActiveX control Test Container](../top/visual-cpp-samples.md).  
  
2.  In Test Container, scegliere dal menu **Modifica**, fare clic **Inserisci nuovo controllo**.  
  
3.  Individuare il controllo, che verrà chiamato `PolyCtl Class`e scegliere **OK**.  Verrà visualizzato un triangolo verde all'interno di un cerchio.  
  
 Provare a modificare il numero di lati seguendo la procedura descritta di seguito.  Per modificare le proprietà di un'interfaccia duale interno di Test Container, utilizzare **Invoke Methods**.  
  
#### Per modificare la proprietà di un controllo dall'interno di Test Container  
  
1.  In Test Container, fare clic **Richiama metodi** il menu **controllo**.  
  
     La finestra di dialogo **Richiama metodo** visualizzare.  
  
2.  Selezionare la versione **PropPut** della proprietà **Sides** dall'elenco a discesa **Nome metodo**.  
  
3.  Tipo `5` nella casella **Valore parametro** fare clic su, **Imposta valore**e scegliere **Richiama**.  
  
 Si noti che il controllo non cambia.  Sebbene modificare il numero di lati internamente impostando la variabile `m_nSides`, questa non ha causato il controllo da aggiornare.  Se si passa a un'altra applicazione e quindi passare di nuovo a Test Container, si scoprirà che il controllo ha aggiornato e il numero corretto dei lati.  
  
 Per risolvere il problema, aggiungere una chiamata alla funzione `FireViewChange`, definita in `IViewObjectExImpl`, dopo avere impostato il numero di lati.  Se il controllo è in esecuzione in una finestra, `FireViewChange` chiamerà direttamente il metodo `InvalidateRect`.  Se il controllo è in esecuzione senza finestra, il metodo `InvalidateRect` verrà chiamato sull'interfaccia del sito del contenitore.  In questo modo il controllo di aggiornarsi.  
  
#### Per aggiungere una chiamata a FireViewChange  
  
1.  Aggiornare PolyCtl.cpp aggiungendo la chiamata a `FireViewChange` al metodo `put_Sides`.  Al termine, il metodo `put_Sides` dovrebbe risultare simile al seguente:  
  
     [!code-cpp[NVC_ATL_Windowing#55](../atl/codesnippet/CPP/changing-the-drawing-code-atl-tutorial-part-4_9.cpp)]  
  
 Dopo l'aggiunta `FireViewChange`, la ricompilazione e riprovare il controllo in ActiveX control Test Container.  Questa volta quando si modifica il numero di lati e scegliere `Invoke`, verrà visualizzata la modifica di controllo immediato.  
  
 Nel prossimo passaggio, verrà aggiunto un evento.  
  
 [Per tornare al passaggio 3](../atl/adding-a-property-to-the-control-atl-tutorial-part-3.md) &#124; [Nel passaggio 5](../atl/adding-an-event-atl-tutorial-part-5.md)  
  
## Vedere anche  
 [Esercitazione](../atl/active-template-library-atl-tutorial.md)   
 [Test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md)