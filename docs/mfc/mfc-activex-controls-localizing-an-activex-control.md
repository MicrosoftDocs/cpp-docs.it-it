---
title: "Controlli ActiveX MFC: localizzazione di un controllo ActiveX | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "LocaleID"
  - "AfxOleRegisterTypeLib"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LocaleID (proprietà di ambiente)"
  - "localizzazione, controlli ActiveX"
  - "LOCALIZE (esempio) [MFC]"
  - "MFC (controlli ActiveX), localizzazione"
ms.assetid: a44b839a-c652-4ec5-b824-04392708a5f9
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Controlli ActiveX MFC: localizzazione di un controllo ActiveX
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo vengono illustrate le procedure per localizzare le interfacce di controlli ActiveX.  
  
 Se si desidera inserire un controllo ActiveX in un mercato internazionale, è possibile localizzare il controllo.  Le finestre sono supportati numerosi linguaggi oltre all'inglese predefinito, inclusi francese, tedesco e svedese.  Questa operazione presenta problemi per il controllo se la relativa interfaccia è solo in inglese.  
  
 I controlli ActiveX devono basarsi in genere sempre le impostazioni locali della proprietà di ambiente di LocaleID.  A questo scopo, è possibile eseguire tre operazioni:  
  
-   Caricare le risorse, sempre su richiesta, in base al valore corrente della proprietà di ambiente di LocaleID.  Il campione di controlli ActiveX MFC [LOCALIZZI](../top/visual-cpp-samples.md) utilizza questa strategia.  
  
-   Caricare le risorse quando il primo controllo è indicato ad esempio, in base alla proprietà di ambiente di LocaleID e utilizza queste risorse per tutte le altre istanze.  In questo articolo viene illustrata questa strategia.  
  
    > [!NOTE]
    >  Ciò non funzionerà correttamente in alcuni casi, se le istanze future hanno diverse impostazioni locali.  
  
-   Utilizzare la funzione di notifica di **OnAmbientChanged** per caricare dinamicamente le risorse appropriate per le impostazioni locali del contenitore.  
  
    > [!NOTE]
    >  Questa tecnica funziona per il controllo, ma la DLL in fase di esecuzione non aggiorna dinamicamente le proprie risorse quando le modifiche di ambiente della proprietà di LocaleID.  Inoltre, le DLL di esecuzione per i controlli ActiveX utilizzano le impostazioni locali del thread per determinare le impostazioni locali per le relative risorse.  
  
 La parte restante di questo articolo vengono descritte due strategie localizzare.  La prima strategia [localizza l'interfaccia di programmazione del controllo](#_core_localizing_your_control.92.s_programmability_interface) \(nomi delle proprietà, metodi ed eventi\).  La seconda strategia [localizza l'interfaccia utente del controllo](#_core_localizing_the_control.92.s_user_interface), utilizzando la proprietà di ambiente LocaleID del contenitore.  Per una dimostrazione di localizzazione di controllo, vedere esempio di controlli ActiveX MFC [LOCALIZZI](../top/visual-cpp-samples.md).  
  
##  <a name="_core_localizing_your_control.92.s_programmability_interface"></a> Passare all'interfaccia di programmazione del controllo  
 Localizzare in un'interfaccia di programmazione del controllo \(interfaccia utilizzata dai programmatori che scrivono applicazioni che utilizzano il controllo\), è necessario creare una versione modificata del file del controllo .IDL \(uno script per compilare la libreria dei tipi di controllo\) per ogni linguaggio si intende supportare.  Questo è l'unico punto in cui è necessario localizzare i nomi delle proprietà di un controllo.  
  
 Quando si compila un controllo localizzato, includere l'id delle impostazioni locali come attributo a livello della libreria dei tipi.  Ad esempio, se si desidera fornire una libreria dei tipi con i nomi delle proprietà localizzate francese, fare una copia del file di SAMPLE.IDL e chiamarla SAMPLEFR.IDL.  Aggiungere un attributo ID delle impostazioni locali al file \(l'id delle impostazioni locali per la lingua francese è 0x040c\), simile al seguente:  
  
 [!code-cpp[NVC_MFC_AxLoc#1](../mfc/codesnippet/CPP/mfc-activex-controls-localizing-an-activex-control_1.idl)]  
  
 Modificare i nomi delle proprietà in SAMPLEFR.IDL i relativi equivalenti francesi e quindi utilizzare MKTYPLIB.EXE per produrre la libreria dei tipi francese, SAMPLEFR.TLB.  
  
 Per creare le librerie dei tipi localizzate più possibile aggiungere tutti i file localizzati di .IDL al progetto e verranno popolati automaticamente.  
  
#### Per aggiungere un file .IDL del controllo ActiveX progetto  
  
1.  Con il progetto di controllo, nel menu di **Progetto** , fare clic **Aggiungi elemento esistente**.  
  
     La finestra di dialogo **Aggiungi elemento esistente** viene visualizzato.  
  
2.  Se necessario, selezionare l'unità e la directory da visualizzare.  
  
3.  Nella casella di **File di tipo**, **Tutti i file \(\*.\*\)**selezionato.  
  
4.  Nella casella di riepilogo file, fare doppio clic sul file con estensione .IDL si desidera inserire nel progetto.  
  
5.  Fare clic **Apri** dopo avere aggiunto tutti i file necessari di .IDL.  
  
 Poiché i file aggiunti al progetto, verranno compilati quando il resto del progetto.  Le librerie dei tipi localizzate si trovano nella directory del progetto corrente del controllo ActiveX.  
  
 Nel codice, i nomi delle proprietà internal \(generalmente in inglese\) vengono utilizzati sempre e non vengono mai localizzati.  Ciò include la mappa di invio del controllo, lo scambio di proprietà viene eseguito e il codice di scambio di dati della pagina delle proprietà.  
  
 Solo un file di libreria dei tipi \(.TLB\) può essere associato nelle risorse nei file di implementazione del controllo \(.OCX\).  Questo rappresenta in genere la versione con, in genere inglese\) i nomi standardizzati.  Per specificare una versione localizzata del controllo che è necessario fornire il .OCX \(che è già stato associato alla versione predefinita di .TLB\) e il .TLB per le impostazioni locali appropriate.  Ciò significa che solo il .OCX è necessario per le versioni inglesi, poiché il .TLB corretto è già stato associato.  Per altre impostazioni locali, la libreria dei tipi localizzata anche deve essere fornita con il .OCX.  
  
 Per assicurarsi che i client del controllo possono trovare la libreria dei tipi localizzata, registrare i file specifici delle impostazioni locali di .TLB nella sezione di libreria dei tipi di sistema di Windows Registro di sistema.  Il terzo parametro \(in genere facoltativo\) della funzione di [AfxOleRegisterTypeLib](../Topic/AfxOleRegisterTypeLib.md) viene fornito a questo scopo.  Nell'esempio registra una libreria dei tipi francese per un controllo ActiveX:  
  
 [!code-cpp[NVC_MFC_AxLoc#2](../mfc/codesnippet/CPP/mfc-activex-controls-localizing-an-activex-control_2.cpp)]  
  
 Quando il controllo viene registrato, la funzione di `AfxOleRegisterTypeLib` viene eseguita automaticamente nel file specificato di .TLB nella stessa directory del controllo e ne vengono registrate nel database di registrazione di windows.  Se il file di .TLB non è presente, la funzione non ha alcun effetto.  
  
##  <a name="_core_localizing_the_control.92.s_user_interface"></a> Localizzare l'interfaccia utente del controllo  
 Per localizzare l'interfaccia utente di un controllo, inserire le risorse da visibili di tutti i controlli quali pagine delle proprietà e messaggi di errore\) in DLL specifici della lingua delle risorse.  È quindi possibile utilizzare la proprietà di ambiente LocaleID contenitore per selezionare la DLL appropriato per le impostazioni locali dell'utente.  
  
 Nell'esempio di codice seguente viene illustrato un approccio per individuare e caricare la DLL delle risorse per le impostazioni locali specifiche.  Questa funzione membro, chiamata `GetLocalizedResourceHandle` per questo esempio, può essere una funzione membro della classe di controlli ActiveX:  
  
 [!code-cpp[NVC_MFC_AxLoc#3](../mfc/codesnippet/CPP/mfc-activex-controls-localizing-an-activex-control_3.cpp)]  
  
 Si noti che la sottolingua ID può essere controllata ogni caso l'istruzione switch, per fornire la localizzazione specializzata.  Per una dimostrazione di questa funzione, vedere funzione di `GetResourceHandle` in esempio di controlli ActiveX MFC [LOCALIZZI](../top/visual-cpp-samples.md).  
  
 Quando il primo controllo verrà caricato in un contenitore, può chiamare [COleControl::AmbientLocaleID](../Topic/COleControl::AmbientLocaleID.md) per recuperare l'id delle impostazioni locali  Il controllo può passare il valore restituito di ID delle impostazioni locali alla funzione di `GetLocalizedResourceHandle`, che carica la libreria appropriata delle risorse.  Il controllo deve passare l'handle risultanti, se presente, a [AfxSetResourceHandle](../Topic/AfxSetResourceHandle.md):  
  
 [!code-cpp[NVC_MFC_AxLoc#4](../mfc/codesnippet/CPP/mfc-activex-controls-localizing-an-activex-control_4.cpp)]  
  
 Inserire nell'esempio di codice precedente in una funzione membro di un controllo, ad esempio un override di [COleControl::OnSetClientSite](../Topic/COleControl::OnSetClientSite.md).  Inoltre, `m_hResDLL` deve essere una variabile membro della classe del controllo.  
  
 È possibile utilizzare la logica simile per localizzare la pagina delle proprietà di un controllo.  Per localizzare la pagina delle proprietà, aggiungere codice simile a quello riportato nel file di implementazione della pagina delle proprietà \(nell'override di [COlePropertyPage::OnSetPageSite](../Topic/COlePropertyPage::OnSetPageSite.md)\):  
  
 [!code-cpp[NVC_MFC_AxLoc#5](../mfc/codesnippet/CPP/mfc-activex-controls-localizing-an-activex-control_5.cpp)]  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)