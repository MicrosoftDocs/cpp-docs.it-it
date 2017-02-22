---
title: "Inserimento del controllo in una pagina Web (Esercitazione di ATL, parte 7) | Microsoft Docs"
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
ms.assetid: 50dc4c95-c95b-4006-b88a-9826f7bdb222
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Inserimento del controllo in una pagina Web (Esercitazione di ATL, parte 7)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il controllo è ora completato.  Per vedere il funzionamento del controllo in una situazione reale, inserirlo in una pagina Web.  Un file HTML contenente il controllo è stato creato quando è stato definito il controllo.  Aprire il file PolyCtl.htm da **Esplora soluzioni** per visualizzare il controllo in una pagina Web.  
  
 In questo passaggio, verrà creato lo script della pagina Web per rispondere agli eventi.  È inoltre possibile modificare il controllo per segnalare a Internet Explorer che il controllo è sicuro per lo script.  
  
## Scripting della pagina Web  
 Il controllo non esegue ancora alcuna operazione, pertanto modificare la pagina Web per rispondere a eventi che vengono inviati.  
  
#### Per eseguire lo script della pagina Web  
  
1.  Aprire PolyCtl.htm e selezionare la visualizzazione HTML.  Aggiungere le seguenti righe al codice HTML.  Devono essere aggiunte dopo `</OBJECT>` ma prima di `</BODY>`.  
  
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
  
 È stato aggiunto codice VBScript mediante il quale si ottiene la proprietà Sides dal controllo e viene incrementato di uno il numero di lati se si fa clic nel controllo.  Facendo clic all'esterno del controllo, il numero di lati viene ridotto di uno.  
  
## Indica che il controllo è sicuro per gli script  
 È possibile visualizzare la pagina Web con il controllo in Internet Explorer o, più agevolmente, utilizzare la visualizzazione del Web browser compilata in Visual C\+\+.  Per vedere il controllo nella visualizzazione del Web browser, fare clic con il pulsante destro del mouse su PolyCtl.htm e fare clic su **Visualizza nel browser**.  
  
 In base alle impostazioni di sicurezza correnti di Internet Explorer, è possibile ricevere una finestra di dialogo Avviso di sicurezza che informa che potrebbe non essere sicuro eseguire lo script del controllo e che potrebbe potenzialmente provocare danni.  Ad esempio, se si disponeva di un controllo che ha visualizzato un file, ma che disponeva anche di un metodo `Delete` che ha eliminato un file, potrebbe essere sicuro visualizzarlo in una pagina.  Non sarebbe tuttavia sicuro creare script, poiché qualcuno potrebbe chiamare il metodo `Delete`.  
  
> [!IMPORTANT]
>  Per questa esercitazione, è possibile modificare le impostazioni di sicurezza in Internet Explorer per eseguire i controlli ActiveX non contrassegnati come sicuri.  Nel Pannello di controllo fare clic su **Proprietà internet** e su **Sicurezza** per modificare le impostazioni appropriate.  Una volta completata l'esercitazione, riportate le impostazioni di sicurezza allo stato originale.  
  
 È possibile avvisare a livello di codice Internet Explorer che non è necessario visualizzare la finestra di dialogo Avviso di sicurezza per questo controllo specifico.  È possibile eseguire questa operazione con l'interfaccia `IObjectSafety` e ATL fornisce un'implementazione di questa interfaccia nella classe [IObjectSafetyImpl](../atl/reference/iobjectsafetyimpl-class.md).  Per aggiungere l'interfaccia al controllo, aggiungere `IObjectSafetyImpl` all'elenco delle classi ereditate e aggiungere una voce corrispondente nella mappa COM.  
  
#### Per aggiungere IObjectSafetyImpl al controllo  
  
1.  Aggiungere la seguente riga alla fine dell'elenco di classi ereditate in PolyCtl.h e aggiungere una virgola alla riga precedente:  
  
     [!code-cpp[NVC_ATL_Windowing#62](../atl/codesnippet/CPP/putting-the-control-on-a-web-page-atl-tutorial-part-7_1.h)]  
  
2.  Aggiungere la seguente riga alla mappa COM in PolyCtl.h:  
  
     [!code-cpp[NVC_ATL_Windowing#63](../atl/codesnippet/CPP/putting-the-control-on-a-web-page-atl-tutorial-part-7_2.h)]  
  
## Compilazione e test del controllo  
 Compilare il controllo.  Una volta completata di nuovo la compilazione, aprire PolyCtl.htm nella visualizzazione browser.  In questo caso, la pagina Web deve essere visualizzata direttamente senza la finestra di dialogo dell'avviso di sicurezza.  Fare clic all'interno del poligono; il numero dei lati aumenta di uno.  Fare clic all'esterno del poligono per ridurre il numero di lati.  Se si tenta di ridurre il numero di lati a meno di tre, verrà visualizzato il messaggio di errore impostato.  
  
 [Torna al passaggio 6](../atl/adding-a-property-page-atl-tutorial-part-6.md)  
  
## Passaggi successivi  
 Questo conclude l'esercitazione su ATL.  Per ottenere collegamenti ad altre informazioni su ATL, vedere la [pagina iniziale di ATL](../atl/active-template-library-atl-concepts.md).  
  
## Vedere anche  
 [Esercitazione](../atl/active-template-library-atl-tutorial.md)