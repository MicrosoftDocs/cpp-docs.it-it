---
description: 'Altre informazioni su: inserimento del controllo in una pagina Web (esercitazione di ATL, parte 7)'
title: Inserimento del controllo in una pagina Web (Esercitazione di ATL, parte 7)
ms.custom: get-started-article
ms.date: 05/06/2019
ms.assetid: 50dc4c95-c95b-4006-b88a-9826f7bdb222
ms.openlocfilehash: 738d847a6436a2afab2e336502ec3255d1a1e589
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159179"
---
# <a name="putting-the-control-on-a-web-page-atl-tutorial-part-7"></a>Inserimento del controllo in una pagina Web (Esercitazione di ATL, parte 7)

Il controllo è ora terminato. Per verificare il funzionamento del controllo in una situazione reale, inserirlo in una pagina Web. Un file HTML che contiene il controllo è stato creato quando è stato definito il controllo. Aprire il file di PolyCtl.htm da **Esplora soluzioni** ed è possibile visualizzare il controllo in una pagina Web.

In questo passaggio si aggiungono funzionalità al controllo e si crea lo script della pagina Web per rispondere agli eventi. Si modificherà anche il controllo per consentire a Internet Explorer di stabilire che il controllo è sicuro per lo scripting.

## <a name="adding-new-functionality"></a>Aggiunta di nuove funzionalità

### <a name="to-add-control-features"></a>Per aggiungere funzionalità di controllo

1. Aprire PolyCtl. cpp e sostituire il codice seguente:

    ```cpp
    if (PtInRegion(hRgn, xPos, yPos))
        Fire_ClickIn(xPos, yPos);
    else
        Fire_ClickOut(xPos, yPos);
    ```

    con

    ```cpp
    short temp = m_nSides;
    if (PtInRegion(hRgn, xPos, yPos))
    {
        Fire_ClickIn(xPos, yPos);
        put_Sides(++temp);
    }
    else
    {
        Fire_ClickOut(xPos, yPos);
        put_Sides(--temp);
    }
    ```

La forma ora aggiunge o rimuove i lati a seconda della posizione in cui si fa clic.

## <a name="scripting-the-web-page"></a>Creazione di script per la pagina Web

Il controllo non esegue ancora alcuna operazione, pertanto modificare la pagina Web per rispondere agli eventi inviati.

### <a name="to-script-the-web-page"></a>Per creare uno script per la pagina Web

1. Aprire PolyCtl.htm e selezionare visualizzazione HTML. Aggiungere le righe seguenti al codice HTML. Devono essere aggiunti dopo `</OBJECT>` , ma prima `</BODY>` .

    ```html
    <SCRIPT LANGUAGE="VBScript">
    <!--
        Sub PolyCtl_ClickIn(x, y)
            MsgBox("Clicked (" & x & ", " & y & ") - adding side")
        End Sub
        Sub PolyCtl_ClickOut(x, y)
            MsgBox("Clicked (" & x & ", " & y & ") - removing side")
        End Sub
    -->
    </SCRIPT>
    ```

1. Salvare il file HTM.

È stato aggiunto un codice VBScript che ottiene la proprietà lati dal controllo. Aumenta il numero di lati di uno se si fa clic all'interno del controllo. Se si fa clic all'esterno del controllo, si riduce il numero di lati di uno.

## <a name="indicating-that-the-control-is-safe-for-scripting"></a>Che indica che il controllo è sicuro per lo scripting

È possibile visualizzare la pagina Web con il controllo solo in Internet Explorer. Altri browser non supportano più i controlli ActiveX a causa di debolezze della sicurezza.

> [!NOTE]
> Se il controllo non è visibile, alcuni browser richiedono regolazioni delle impostazioni per eseguire i controlli ActiveX. Per informazioni sull'abilitazione dei controlli ActiveX, vedere la documentazione del browser.

In base alle impostazioni di sicurezza correnti di Internet Explorer, è possibile che venga visualizzata una finestra di dialogo avviso di sicurezza. Indica che il controllo potrebbe non essere sicuro per lo script e potrebbe causare danni. Se, ad esempio, si dispone di un controllo che visualizza un file ma anche di un `Delete` metodo che ha eliminato un file, sarebbe sicuro se fosse stato appena visualizzato in una pagina. Tuttavia, non sarebbe sicuro eseguire lo script, perché qualcuno poteva chiamare il `Delete` metodo.

> [!IMPORTANT]
> Per questa esercitazione, è possibile modificare le impostazioni di sicurezza in Internet Explorer per eseguire controlli ActiveX non contrassegnati come sicuri. Nel pannello di controllo fare clic su **Proprietà Internet** e quindi su **sicurezza** per modificare le impostazioni appropriate. Al termine dell'esercitazione, modificare di nuovo le impostazioni di sicurezza in base allo stato originale.

È possibile segnalare a livello di codice a Internet Explorer che non è necessario visualizzare la finestra di dialogo avviso di sicurezza per questo particolare controllo. È possibile eseguire questa operazione tramite l' `IObjectSafety` interfaccia. ATL fornisce un'implementazione di questa interfaccia nella classe [IObjectSafetyImpl](../atl/reference/iobjectsafetyimpl-class.md). Per aggiungere l'interfaccia al controllo, aggiungere `IObjectSafetyImpl` all'elenco di classi ereditate e aggiungervi una voce nella mappa com.

### <a name="to-add-iobjectsafetyimpl-to-the-control"></a>Per aggiungere IObjectSafetyImpl al controllo

1. Aggiungere la riga seguente alla fine dell'elenco di classi ereditate in PolyCtl. h e aggiungere una virgola alla riga precedente:

    [!code-cpp[NVC_ATL_Windowing#62](../atl/codesnippet/cpp/putting-the-control-on-a-web-page-atl-tutorial-part-7_1.h)]

1. Aggiungere la riga seguente alla mappa COM in PolyCtl. h:

    [!code-cpp[NVC_ATL_Windowing#63](../atl/codesnippet/cpp/putting-the-control-on-a-web-page-atl-tutorial-part-7_2.h)]

## <a name="building-and-testing-the-control"></a>Compilazione e test del controllo

Compilare il controllo. Al termine della compilazione, aprire di nuovo PolyCtl.htm nella visualizzazione del browser. Questa volta, la pagina Web deve essere visualizzata direttamente senza la finestra di dialogo **avviso di sicurezza** . Se si fa clic all'interno del poligono, il numero di lati aumenta di uno. Fare clic all'esterno del poligono per ridurre il numero di lati.

[Tornare al passaggio 6](../atl/adding-a-property-page-atl-tutorial-part-6.md)

## <a name="next-steps"></a>Passaggi successivi

Questo passaggio conclude l'esercitazione di ATL. Per i collegamenti ad altre informazioni su ATL, vedere la [pagina iniziale di ATL](../atl/active-template-library-atl-concepts.md).

## <a name="see-also"></a>Vedi anche

[Esercitazione](../atl/active-template-library-atl-tutorial.md)
