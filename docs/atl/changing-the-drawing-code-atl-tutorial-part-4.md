---
title: Modifica il codice del disegno (ATL Tutorial, parte 4) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
helpviewer_keywords: _ATL_MIN_CRT macro
ms.assetid: 08ff14e8-aa49-4139-a110-5d071939cf1e
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ccbf7dab7d39a80efa2b0b0b88b615c55cd9e56d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="changing-the-drawing-code-atl-tutorial-part-4"></a>Modifica del codice del disegno (Esercitazione di ATL, parte 4)
Per impostazione predefinita, il codice di creazione del controllo viene visualizzato un quadrato e il testo **PolyCtl**. In questo passaggio si modificherà il codice per visualizzare più interessante. Sono coinvolte le attività seguenti:  
  
-   Modifica il File di intestazione  
  
-   Modifica il `OnDraw` (funzione)  
  
-   Aggiunta di un metodo per calcolare i punti del poligono  
  
-   Inizializzazione il colore di riempimento  
  
## <a name="modifying-the-header-file"></a>Modifica il File di intestazione  
 Per iniziare, aggiungere il supporto per le funzioni matematiche `sin` e `cos`, che verrà utilizzata per calcolare i punti del poligono e con la creazione di una matrice per archiviare le posizioni.  
  
#### <a name="to-modify-the-header-file"></a>Per modificare il file di intestazione  
  
1.  Aggiungere la riga `#include <math.h>` nella parte superiore di PolyCtl. H. Inizio del file dovrebbe essere simile al seguente:  
  
     [!code-cpp[NVC_ATL_Windowing#47](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_1.cpp)]  
  
2.  Una volta che vengono calcolati i punti del poligono, verranno archiviati in una matrice di tipo `POINT`, quindi aggiungere la matrice dopo la definizione di `m_nSides` in PolyCtl. H:  
  
     [!code-cpp[NVC_ATL_Windowing#48](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_2.h)]  
  
## <a name="modifying-the-ondraw-method"></a>Modifica del metodo OnDraw  
 Ora è necessario modificare il `OnDraw` metodo PolyCtl. Il codice verrà aggiunta una nuova penna e un pennello con cui disegnare il poligono e quindi chiama il `Ellipse` e `Polygon` funzioni API Win32 per eseguire il disegno effettivo.  
  
#### <a name="to-modify-the-ondraw-function"></a>Per modificare la funzione OnDraw  
  
1.  Sostituire `OnDraw` metodo PolyCtl con il codice seguente:  
  
     [!code-cpp[NVC_ATL_Windowing#49](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_3.cpp)]  
  
## <a name="adding-a-method-to-calculate-the-polygon-points"></a>Aggiunta di un metodo per calcolare i punti del poligono  
 Aggiungere un metodo, denominato `CalcPoints`, di calcolare le coordinate dei punti che compongono il perimetro del poligono. Questi calcoli saranno basati sulla variabile RECT che viene passata alla funzione.  
  
#### <a name="to-add-the-calcpoints-method"></a>Per aggiungere il metodo CalcPoints  
  
1.  Aggiungere la dichiarazione di `CalcPoints` per il `IPolyCtl` sezione pubblica della `CPolyCtl` classe in PolyCtl. H:  
  
     [!code-cpp[NVC_ATL_Windowing#50](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_4.h)]  
  
     L'ultima parte della sezione pubblica del `CPolyCtl` classe sarà simile al seguente:  
  
     [!code-cpp[NVC_ATL_Windowing#51](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_5.h)]  
  
2.  Questa implementazione di aggiungere il `CalcPoints` funzione alla fine di PolyCtl:  
  
     [!code-cpp[NVC_ATL_Windowing#52](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_6.cpp)]  
  
## <a name="initializing-the-fill-color"></a>Inizializzazione il colore di riempimento  
 Inizializzare `m_clrFillColor` con un colore predefinito.  
  
#### <a name="to-initialize-the-fill-color"></a>Per inizializzare il colore di riempimento  
  
1.  Utilizzare il verde come colore predefinito aggiungendo la riga di `CPolyCtl` costruttore in PolyCtl. H:  
  
     [!code-cpp[NVC_ATL_Windowing#53](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_7.h)]  
  
 Il costruttore è ora simile al seguente:  
  
 [!code-cpp[NVC_ATL_Windowing#54](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_8.h)]  
  
## <a name="building-and-testing-the-control"></a>Compilazione e test del controllo  
 Ricompilare il controllo. Verificare che il file PolyCtl viene chiuso se è ancora aperta e quindi fare clic su **Genera Polygon** sul **compilare** menu. È possibile visualizzare il controllo di nuovo la pagina PolyCtl, ma questa volta usare il controllo ActiveX Test Container.  
  
#### <a name="to-use-the-activex-control-test-container"></a>Per utilizzare ActiveX Control Test Container  
  
1.  Compilare e avviare il controllo ActiveX Test Container. Per ulteriori informazioni, vedere [esempio TSTCON: ActiveX Control Test Container](../visual-cpp-samples.md).  
  
2.  Nel contenitore di Test, nel **modifica** menu, fare clic su **Inserisci nuovo controllo**.  
  
3.  Individuare il controllo, che verrà chiamato `PolyCtl Class`, fare clic su **OK**. Verrà visualizzato un triangolo verde all'interno di un cerchio.  
  
 Provare a modificare il numero di lati attenendosi alla procedura successiva. Per modificare le proprietà su un'interfaccia duale all'interno del contenitore di Test, utilizzare **richiama metodi**.  
  
#### <a name="to-modify-a-controls-property-from-within-the-test-container"></a>Per modificare le proprietà di un controllo all'interno del contenitore di Test  
  
1.  Nel contenitore di Test, fare clic su **richiama metodi** sul **controllo** menu.  
  
     Il **Richiama metodo** viene visualizzata la finestra di dialogo.  
  
2.  Selezionare il **PropPut** versione il **lati** proprietà dal **nome del metodo** casella di riepilogo a discesa.  
  
3.  Tipo `5` nel **valore del parametro** fare clic su **Imposta valore**, fare clic su **Invoke**.  
  
 Si noti che il controllo non cambiano. Anche se è modificato il numero dei lati internamente impostando il `m_nSides` variabile, questa non produceva ridisegnare il controllo. Se si passa a un'altra applicazione e quindi passare al contenitore di Test, si noterà che il controllo stato ridisegnato e presenta il numero corretto di lati.  
  
 Per risolvere il problema, aggiungere una chiamata al `FireViewChange` funzione, definito in `IViewObjectExImpl`, dopo aver impostato il numero di lati. Se il controllo è in esecuzione nella propria finestra, `FireViewChange` chiamerà il `InvalidateRect` metodo direttamente. Se il controllo è in esecuzione senza finestra, il `InvalidateRect` metodo verrà chiamato sull'interfaccia del sito del contenitore. In questo modo il controllo verrà ridisegnato.  
  
#### <a name="to-add-a-call-to-fireviewchange"></a>Per aggiungere una chiamata a FireViewChange  
  
1.  Aggiornare PolyCtl aggiungendo la chiamata a `FireViewChange` per il `put_Sides` metodo. Al termine, il `put_Sides` metodo dovrebbe essere simile al seguente:  
  
     [!code-cpp[NVC_ATL_Windowing#55](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_9.cpp)]  
  
 Dopo l'aggiunta di `FireViewChange`, ricompilare e provare di nuovo il controllo ActiveX Control Test Container. Questa volta, quando si modifica il numero di parti e fare clic su `Invoke`, si dovrebbe essere modificare immediatamente il controllo.  
  
 Nel passaggio successivo, si aggiungerà un evento.  
  
 [Al passaggio 3](../atl/adding-a-property-to-the-control-atl-tutorial-part-3.md) &#124; [Al passaggio 5](../atl/adding-an-event-atl-tutorial-part-5.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Esercitazione](../atl/active-template-library-atl-tutorial.md)   
 [Test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md)

