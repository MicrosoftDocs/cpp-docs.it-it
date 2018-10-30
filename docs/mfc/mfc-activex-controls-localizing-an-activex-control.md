---
title: 'Controlli ActiveX MFC: Localizzazione di un controllo ActiveX | Microsoft Docs'
ms.custom: ''
ms.date: 09/12/2018
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
ms.openlocfilehash: fb31eb15a61f1d4cbee7ba7402de508a84124461
ms.sourcegitcommit: a3c9e7888b8f437a170327c4c175733ad9eb0454
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2018
ms.locfileid: "50204704"
---
# <a name="mfc-activex-controls-localizing-an-activex-control"></a>Controlli ActiveX MFC: localizzazione di un controllo ActiveX

Questo articolo vengono illustrate le procedure per la localizzazione di interfacce di controlli ActiveX.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

Se si desidera adattare un controllo ActiveX per un mercato internazionale, è possibile localizzare il controllo. Windows supporta molte lingue oltre all'inglese, tra cui svedese, tedesco e francese predefinito. Ciò può presentare problemi per il controllo se la sua interfaccia è solo in inglese.

In generale, i controlli ActiveX devono sempre basare le proprie impostazioni internazionali sulla proprietà LocaleID ambiente. A questo scopo, è possibile eseguire tre operazioni:

- Caricare le risorse, sempre su richiesta, in base al valore corrente della proprietà di ambiente LocaleID. Esempio dei controlli ActiveX di MFC [LOCALIZE](../visual-cpp-samples.md) utilizza questa strategia.

- Caricare le risorse quando il primo controllo viene creata un'istanza, in base alla proprietà LocaleID ambiente e usare queste risorse per tutte le altre istanze. Questo articolo illustra questa strategia.

    > [!NOTE]
    >  Questo non funzionerà correttamente in alcuni casi, se le istanze future con impostazioni locali diverse.

- Usare il `OnAmbientChanged` funzione di notifica da caricare in modo dinamico le risorse appropriate per le impostazioni locali del contenitore.

    > [!NOTE]
    >  Questa tecnica funziona per il controllo, ma la DLL di runtime non aggiornerà dinamicamente le proprie risorse quando la proprietà LocaleID ambiente modificata. Inoltre, le DLL di runtime per i controlli ActiveX utilizzano impostazioni locali del thread per determinare le impostazioni locali per le proprie risorse.

La parte restante di questo articolo descrive due strategie di localizzazione. La prima strategia [localizza l'interfaccia del controllo programmabilità](#_core_localizing_your_control.92.s_programmability_interface) (nomi di proprietà, metodi ed eventi). La seconda strategia [localizza l'interfaccia utente controllo](#_core_localizing_the_control.92.s_user_interface), tramite proprietà LocaleID ambiente del contenitore. Per una dimostrazione della localizzazione dei controlli, vedere l'esempio di controlli ActiveX MFC [LOCALIZE](../visual-cpp-samples.md).

##  <a name="_core_localizing_your_control.92.s_programmability_interface"></a> Localizzazione di interfaccia di programmabilità del controllo

Durante la localizzazione di interfaccia di programmabilità del controllo (l'interfaccia utilizzata per i programmatori che scrivono applicazioni che usano il controllo), è necessario creare una versione modificata del controllo. (Uno script per la creazione di libreria dei tipi di controllo) del file IDL per ogni lingua che si intende supportare. Questo è l'unica piattaforma che è necessario localizzare i nomi delle proprietà di controllo.

Quando si sviluppa un controllo localizzato, includere l'ID impostazioni locali come un attributo a livello di raccolta di tipo. Ad esempio, se si desidera fornire una libreria dei tipi con i nomi di proprietà localizzata in francese, creare una copia dell'esempio. IDL file e chiamarlo SAMPLEFR. IDL. Aggiungere un attributo ID impostazioni locali del file (ID impostazioni locali per il francese viene 0x040c), simile al seguente:

[!code-cpp[NVC_MFC_AxLoc#1](../mfc/codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_1.idl)]

Modificare i nomi di proprietà in SAMPLEFR. IDL ai propri gli equivalenti francesi e quindi usare MKTYPLIB. File EXE per produrre il francese libreria dei tipi, SAMPLEFR. TLB.

Per creare più librerie dei tipi localizzata è possibile aggiungere qualsiasi localizzato. File IDL per il progetto e verranno generati automaticamente.

#### <a name="to-add-an-idl-file-to-your-activex-control-project"></a>Per aggiungere un. File IDL per il progetto del controllo ActiveX

1. Con il progetto di controllo aperto, scegliere il **Project** menu, fare clic su **Aggiungi elemento esistente**.

   Il **Aggiungi elemento esistente** verrà visualizzata la finestra di dialogo.

1. Se necessario, selezionare l'unità e directory da visualizzare.

1. Nel **file di tipo** , quindi selezionare **tutti i file (\*.\*)** .

1. Nella casella di riepilogo di file, fare doppio clic il. File IDL che si desidera inserire nel progetto.

1. Fare clic su **aperto** dopo avere aggiunto tutte le necessarie. File IDL.

Poiché i file sono stati aggiunti al progetto, questi vengono generati quando viene compilato il resto del progetto. Le librerie dei tipi localizzato si trovano nella directory del progetto controllo ActiveX corrente.

All'interno del codice, i nomi di proprietà interno (in genere in inglese) vengono sempre utilizzati e non sono localizzati. Ciò include la mappa di invio di controllo, le funzioni di scambio di proprietà e il codice di scambio dati pagina proprietà.

Libreria di un solo tipo (. Può essere associato al file TLB) sulle risorse di implementazione del controllo (. File OCX). In genere si tratta della versione con la standard (in inglese) i nomi. Per distribuire una versione localizzata del controllo è necessario per spedire il. OCX (che è già stato associato per il valore predefinito. Versione TLB) e il. TLB per le impostazioni locali appropriate. Ciò significa che solo il. OCX è necessaria per le versioni in lingua inglese, perché i valori corretti. TLB è già stato associato ad esso. Per altre impostazioni locali, la libreria dei tipi localizzato deve essere spedita anche con il. OCX.

Per garantire che i client del controllo possono trovare la libreria dei tipi localizzato, registrare le specifiche delle impostazioni locali. File TLB nella sezione della libreria dei tipi del Registro di sistema Windows. Il terzo parametro (in genere facoltativo) del [AfxOleRegisterTypeLib](../mfc/reference/registering-ole-controls.md#afxoleregistertypelib) funzione viene fornita per questo scopo. Nell'esempio seguente registra una libreria dei tipi in francese per un controllo ActiveX:

[!code-cpp[NVC_MFC_AxLoc#2](../mfc/codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_2.cpp)]

Quando il controllo viene registrato, il `AfxOleRegisterTypeLib` funzione cerca automaticamente l'oggetto specificato. Al file TLB nella stessa directory del controllo e viene registrato nel database di registrazione di Windows. Se il. File TLB non viene trovato, la funzione non ha alcun effetto.

##  <a name="_core_localizing_the_control.92.s_user_interface"></a> Localizzazione dell'interfaccia utente del controllo

Per localizzare l'interfaccia utente di un controllo, inserire tutte le risorse del controllo visibile dall'utente (ad esempio le pagine delle proprietà e i messaggi di errore) in DLL delle risorse specifiche della lingua. È quindi possibile usare proprietà LocaleID dell'ambiente del contenitore selezionare la DLL appropriata per le impostazioni locali dell'utente.

Esempio di codice seguente viene illustrato un approccio per individuare e caricare la DLL risorse per impostazioni locali specifiche. Questa funzione membro, denominata `GetLocalizedResourceHandle` per questo esempio, può essere una funzione membro della classe di controlli ActiveX:

[!code-cpp[NVC_MFC_AxLoc#3](../mfc/codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_3.cpp)]

Si noti che l'ID di varietà di lingua è stato possibile essere archiviato in ogni caso dell'istruzione switch, per fornire più specializzato di localizzazione. Per una dimostrazione di questa funzione, vedere la `GetResourceHandle` esempio dei controlli funzione in ActiveX di MFC [LOCALIZE](../visual-cpp-samples.md).

Quando il controllo carica prima di tutto se stesso in un contenitore, è possibile chiamare [COleControl:: AmbientLocaleID](../mfc/reference/colecontrol-class.md#ambientlocaleid) per recuperare l'ID delle impostazioni locali. Il controllo può quindi passare il valore di ID delle impostazioni locali restituito per il `GetLocalizedResourceHandle` funzione, che carica la libreria di risorse appropriato. Il controllo deve passare l'handle risultante, se presente, a [AfxSetResourceHandle](../mfc/reference/application-information-and-management.md#afxsetresourcehandle):

[!code-cpp[NVC_MFC_AxLoc#4](../mfc/codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_4.cpp)]

Inserire l'esempio di codice precedente in una funzione membro del controllo, ad esempio un override di [COleControl:: OnSetClientSite](../mfc/reference/colecontrol-class.md#onsetclientsite). È inoltre *m_hResDLL* deve essere una variabile membro della classe del controllo.

È possibile usare una logica simile per la localizzazione di pagina delle proprietà di un controllo. Per localizzare la pagina delle proprietà, aggiungere codice simile all'esempio seguente al file di implementazione della pagina delle proprietà (in sostituzione del [COlePropertyPage:: OnSetPageSite](../mfc/reference/colepropertypage-class.md#onsetpagesite)):

[!code-cpp[NVC_MFC_AxLoc#5](../mfc/codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

