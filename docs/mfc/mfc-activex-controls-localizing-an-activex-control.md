---
title: 'Controlli ActiveX MFC: Localizzazione di un controllo ActiveX | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- LocaleID
- AfxOleRegisterTypeLib
dev_langs:
- C++
helpviewer_keywords:
- localization, ActiveX controls
- MFC ActiveX controls [MFC], localizing
- LocaleID ambient property [MFC]
- LOCALIZE sample [MFC]
ms.assetid: a44b839a-c652-4ec5-b824-04392708a5f9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b9a6495c23695f8cdedf45fbdd7cbc915b96873e
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929608"
---
# <a name="mfc-activex-controls-localizing-an-activex-control"></a>Controlli ActiveX MFC: localizzazione di un controllo ActiveX
In questo articolo vengono illustrate le procedure per la localizzazione le interfacce dei controlli ActiveX.  
  
 Se si desidera adattare un controllo ActiveX a un mercato internazionale, si desidera localizzare il controllo. Windows supporta molte lingue oltre all'inglese, come il tedesco, francese e svedese predefinito. Ciò può presentare problemi per il controllo se l'interfaccia è solo in inglese.  
  
 In generale, i controlli ActiveX devono sempre basare le proprie impostazioni internazionali di proprietà LocaleID dell'ambiente. A questo scopo, è possibile eseguire tre operazioni:  
  
-   Caricare le risorse, sempre su richiesta, in base al valore corrente della proprietà di ambiente LocaleID. Esempio dei controlli ActiveX MFC [LOCALIZE](../visual-cpp-samples.md) utilizza questa strategia.  
  
-   Caricare le risorse quando il primo controllo viene creata un'istanza, in base alle proprietà di ambiente LocaleID e usare queste risorse per tutte le altre istanze. In questo articolo viene illustrata questa strategia.  
  
    > [!NOTE]
    >  Ciò non funzionerà correttamente in alcuni casi, se le istanze future con impostazioni locali diverse.  
  
-   Utilizzare il `OnAmbientChanged` funzione di notifica da caricare in modo dinamico le risorse appropriate per le impostazioni locali del contenitore.  
  
    > [!NOTE]
    >  Questa tecnica funziona per il controllo, ma la DLL di runtime non aggiornerà in modo dinamico le proprie risorse alla modifica della proprietà LocaleID ambiente. Inoltre, le DLL di runtime per i controlli ActiveX utilizzano impostazioni locali del thread per determinare le impostazioni locali per le relative risorse.  
  
 Il resto di questo articolo vengono descritte due strategie di localizzazione. La prima strategia [localizza interfaccia di programmabilità del controllo](#_core_localizing_your_control.92.s_programmability_interface) (nomi di proprietà, metodi ed eventi). La seconda strategia [localizza interfaccia utente del controllo](#_core_localizing_the_control.92.s_user_interface), tramite proprietà LocaleID ambiente del contenitore. Per una dimostrazione della localizzazione del controllo, vedere l'esempio di controlli ActiveX MFC [LOCALIZE](../visual-cpp-samples.md).  
  
##  <a name="_core_localizing_your_control.92.s_programmability_interface"></a> Localizzazione di interfaccia di programmabilità del controllo  
 Durante la localizzazione di interfaccia di programmabilità del controllo (l'interfaccia utilizzata per i programmatori che scrivono applicazioni che utilizzano il controllo del codice), è necessario creare una versione modificata del controllo. IDL (uno script per la compilazione di libreria dei tipi di controllo) del file per ogni lingua che si intende supportare. Questo è l'unico punto che è necessario per localizzare i nomi delle proprietà di controllo.  
  
 Quando si sviluppa un controllo localizzato, includere l'ID delle impostazioni locali come un attributo a livello di raccolta di tipo. Ad esempio, se si desidera fornire una libreria dei tipi con nomi di proprietà localizzata francese, creare una copia dell'esempio. IDL file e chiamarlo SAMPLEFR. FILE IDL. Aggiungere un attributo ID impostazioni locali del file (ID delle impostazioni locali per il francese è 0x040c), simile al seguente:  
  
 [!code-cpp[NVC_MFC_AxLoc#1](../mfc/codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_1.idl)]  
  
 Modificare i nomi di proprietà in SAMPLEFR. File IDL per i relativi equivalenti francesi e quindi utilizzare MKTYPLIB. File EXE per produrre il francese libreria dei tipi, SAMPLEFR. TLB.  
  
 Per creare più librerie dei tipi localizzata è possibile aggiungere qualsiasi localizzata. File IDL per il progetto e verranno generati automaticamente.  
  
#### <a name="to-add-an-idl-file-to-your-activex-control-project"></a>Per aggiungere un. File IDL per il progetto del controllo ActiveX  
  
1.  Con il progetto di controllo aperto, scegliere il **Project** menu, fare clic su **Aggiungi elemento esistente**.  
  
     Il **Aggiungi elemento esistente** verrà visualizzata la finestra di dialogo.  
  
2.  Se necessario, selezionare l'unità e directory da visualizzare.  
  
3.  Nel **tipo file** , quindi selezionare **tutti i file (\*.\*)** .  
  
4.  Nella casella di riepilogo file, fare doppio clic su di. File IDL che si desidera inserire nel progetto.  
  
5.  Fare clic su **Open** dopo avere aggiunto tutte le necessarie. IDL (file).  
  
 Poiché i file sono stati aggiunti al progetto, verrà generati quando viene compilato il resto del progetto. Le librerie dei tipi localizzata si trovano nella directory del progetto controllo ActiveX corrente.  
  
 All'interno del codice, i nomi delle proprietà interne (in genere in lingua inglese) vengono sempre utilizzati e non sono localizzati. Ciò include la mappa di invio di controllo, le funzioni di scambio di proprietà e il codice di scambio dei dati di pagina proprietà.  
  
 Libreria di un solo tipo (. File TLB) può essere associato alle risorse dell'implementazione del controllo (. File OCX). In genere si tratta della versione con standardizzati (in inglese) i nomi. Per distribuire una versione localizzata del controllo è necessario spedire il. OCX (che è già stata associata per il valore predefinito. Versione TLB) e il. TLB per le impostazioni locali appropriate. Ciò significa che solo il. OCX è necessaria per le versioni in lingua inglese, dopo il corretto. TLB è già stata associata a esso. Per altre impostazioni locali, la libreria dei tipi localizzata deve essere fornita anche con il. OCX.  
  
 Per garantire che i client del controllo è possono trovare la libreria dei tipi localizzata, registrare le specifiche delle impostazioni locali. File TLB nella sezione della libreria dei tipi del Registro di sistema Windows. Il terzo parametro (in genere facoltativo) del [AfxOleRegisterTypeLib](../mfc/reference/registering-ole-controls.md#afxoleregistertypelib) funzione viene fornita per questo scopo. Nell'esempio seguente registra una libreria dei tipi in francese per un controllo ActiveX:  
  
 [!code-cpp[NVC_MFC_AxLoc#2](../mfc/codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_2.cpp)]  
  
 Quando il controllo viene registrato, il `AfxOleRegisterTypeLib` funzione cerca automaticamente l'oggetto specificato. File TLB nella stessa directory del controllo e registrarla nel database di registrazione di Windows. Se il. File TLB non viene trovato, la funzione non ha alcun effetto.  
  
##  <a name="_core_localizing_the_control.92.s_user_interface"></a> Localizzazione di interfaccia utente del controllo  
 Per localizzare l'interfaccia utente del controllo, inserire tutte le risorse del controllo visibile dall'utente (ad esempio pagine delle proprietà e i messaggi di errore) nella DLL delle risorse specifiche della lingua. È quindi possibile utilizzare proprietà LocaleID dell'ambiente del contenitore per selezionare la DLL appropriata per le impostazioni locali dell'utente.  
  
 Esempio di codice seguente viene illustrato uno degli approcci disponibili per individuare e caricare la DLL di risorse per impostazioni locali specifiche. Questa funzione membro, chiamata `GetLocalizedResourceHandle` per questo esempio, può essere una funzione membro di classe del controllo ActiveX:  
  
 [!code-cpp[NVC_MFC_AxLoc#3](../mfc/codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_3.cpp)]  
  
 Si noti che è stato possibile verificare l'ID di varietà di lingua in ogni caso dell'istruzione switch, per fornire più specializzata di localizzazione. Per una dimostrazione di questa funzione, vedere la `GetResourceHandle` esempio dei controlli ActiveX MFC funzione [LOCALIZE](../visual-cpp-samples.md).  
  
 Quando il controllo carica innanzitutto in un contenitore, può chiamare [COleControl:: AmbientLocaleID](../mfc/reference/colecontrol-class.md#ambientlocaleid) per recuperare l'ID delle impostazioni locali. Il controllo può quindi passare il valore di ID delle impostazioni locali restituito per il `GetLocalizedResourceHandle` (funzione), che carica la libreria di risorse appropriato. Il controllo deve passare l'handle risulta, se presente, per [AfxSetResourceHandle](../mfc/reference/application-information-and-management.md#afxsetresourcehandle):  
  
 [!code-cpp[NVC_MFC_AxLoc#4](../mfc/codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_4.cpp)]  
  
 Inserire il codice di esempio sopra in una funzione membro del controllo, ad esempio un override di [COleControl:: OnSetClientSite](../mfc/reference/colecontrol-class.md#onsetclientsite). Inoltre, *m_hResDLL* deve essere una variabile membro della classe del controllo.  
  
 È possibile utilizzare una logica simile per la localizzazione di pagina delle proprietà del controllo. Per localizzare la pagina delle proprietà, aggiungere codice analogo all'esempio seguente al file di implementazione della pagina delle proprietà (in un override di [COlePropertyPage:: OnSetPageSite](../mfc/reference/colepropertypage-class.md#onsetpagesite)):  
  
 [!code-cpp[NVC_MFC_AxLoc#5](../mfc/codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_5.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

