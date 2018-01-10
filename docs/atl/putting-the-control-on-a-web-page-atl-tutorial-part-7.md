---
title: Inserimento del controllo in una pagina Web (ATL Tutorial, parte 7) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
ms.assetid: 50dc4c95-c95b-4006-b88a-9826f7bdb222
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 523086c70d9f974c014f5d33a71bf9309b8e017d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="putting-the-control-on-a-web-page-atl-tutorial-part-7"></a>Inserimento del controllo in una pagina Web (Esercitazione di ATL, parte 7)
Il controllo è terminato. Per visualizzare il controllo funziona in una situazione reale, inserirlo in una pagina Web. Un file HTML che contiene il controllo è stato creato al momento di definire il controllo. Aprire il file PolyCtl da **Esplora**, ed è possibile visualizzare il controllo in una pagina Web.  
  
 In questo passaggio verrà creato lo script la pagina Web per rispondere a eventi. Inoltre, verrà modificato il controllo per Internet Explorer di informare che il controllo è sicuro per lo scripting.  
  
## <a name="scripting-the-web-page"></a>La pagina Web di scripting  
 Il controllo non eseguire alcuna operazione ancora, occorre modificare la pagina Web per rispondere agli eventi inviati.  
  
#### <a name="to-script-the-web-page"></a>Script della pagina Web  
  
1.  Aprire PolyCtl e selezionare la visualizzazione HTML. Aggiungere le righe seguenti al codice HTML. Devono essere aggiunti dopo `</OBJECT>` ma prima `</BODY>`.  
  
 ```  
 
 <SCRIPT LANGUAGE="VBScript">  
 <!--  
    Sub PolyCtl_ClickIn(x, y)  
    PolyCtl.Sides = PolyCtl.Sides + 1  
    End Sub  
    Sub PolyCtl_ClickOut(x, y)  
    PolyCtl.Sides = PolyCtl.Sides - 1  
    End Sub  
 -->  
 </SCRIPT>  
 ```  
  
2.  Salvare il file HTM.  
  
 È stato aggiunto codice VBScript che ottiene la proprietà i lati del controllo e aumenta il numero di lati uno se si fa clic all'interno del controllo. Se si fa clic all'esterno del controllo, ridurre il numero di parti di uno.  
  
## <a name="indicating-that-the-control-is-safe-for-scripting"></a>Che indica che il controllo è sicuro per lo Scripting  
 È possibile visualizzare la pagina Web con il controllo in Internet Explorer o, più facilmente, utilizzare la visualizzazione del browser Web incorporata in Visual C++. Per visualizzare il controllo nella visualizzazione esplorazione Web, fare doppio clic su PolyCtl e fare clic su **Visualizza nel Browser**.  
  
 In base alle impostazioni di sicurezza corrente di Internet Explorer, si potrebbe ricevere un avviso di sicurezza della finestra di dialogo indicante che il controllo potrebbe non essere sicuro per script e può causare danni. Ad esempio, se si dispone di un controllo di visualizzazione di un file, ma ha anche un `Delete` metodo eliminato un file, potrebbe essere sicuro se semplicemente visualizzati nella pagina. Potrebbe non essere sicuro generare lo script, tuttavia, poiché un utente può chiamare il `Delete` metodo.  
  
> [!IMPORTANT]
>  Per questa esercitazione, è possibile modificare le impostazioni di sicurezza in Internet Explorer per eseguire i controlli ActiveX non contrassegnati come sicuri. Nel Pannello di controllo, fare clic su **proprietà Internet** e fare clic su **sicurezza** per modificare le impostazioni appropriate. Dopo aver completato l'esercitazione, è possibile modificare le impostazioni di sicurezza torna allo stato originale.  
  
 È possibile avvisare a livello di programmazione Internet Explorer che non è necessario visualizzare la finestra di dialogo Avviso di sicurezza per questo particolare controllo. È possibile farlo con la `IObjectSafety` interfaccia e ATL fornisce un'implementazione di questa interfaccia nella classe [IObjectSafetyImpl](../atl/reference/iobjectsafetyimpl-class.md). Per aggiungere l'interfaccia per il controllo, aggiungere `IObjectSafetyImpl` all'elenco delle classi ereditate e aggiungere una voce per tale nella mappa COM.  
  
#### <a name="to-add-iobjectsafetyimpl-to-the-control"></a>Per aggiungere IObjectSafetyImpl al controllo  
  
1.  Aggiungere la riga seguente alla fine dell'elenco di classi ereditate in PolyCtl. H e aggiungere una virgola alla riga precedente:  
  
 [!code-cpp[NVC_ATL_Windowing#62](../atl/codesnippet/cpp/putting-the-control-on-a-web-page-atl-tutorial-part-7_1.h)]  
  
2.  Aggiungere la riga seguente alla mappa COM in PolyCtl. H:  
  
 [!code-cpp[NVC_ATL_Windowing#63](../atl/codesnippet/cpp/putting-the-control-on-a-web-page-atl-tutorial-part-7_2.h)]  
  
## <a name="building-and-testing-the-control"></a>Compilazione e test del controllo  
 Compilare il controllo. Al termine della compilazione, aprire nuovamente PolyCtl nella visualizzazione esplorazione. Questa volta, la pagina Web deve essere visualizzata direttamente senza la finestra di dialogo Avviso di sicurezza. Fare clic all'interno del poligono. il numero di lati aumenta di uno. Fare clic all'esterno del poligono per ridurre il numero dei lati. Se si tenta di ridurre il numero di lati seguito tre, si verrà visualizzato il messaggio di errore è impostata.  
  
 [Torna al passaggio 6](../atl/adding-a-property-page-atl-tutorial-part-6.md)  
  
## <a name="next-steps"></a>Passaggi successivi  
 Questa operazione conclude l'esercitazione ATL. Per collegamenti a ulteriori informazioni su ATL, vedere il [pagina iniziale di ATL](../atl/active-template-library-atl-concepts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Esercitazione](../atl/active-template-library-atl-tutorial.md)

