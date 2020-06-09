---
title: 'Controlli ActiveX MFC: localizzazione di un controllo ActiveX'
ms.date: 09/12/2018
f1_keywords:
- LocaleID
- AfxOleRegisterTypeLib
helpviewer_keywords:
- localization, ActiveX controls
- MFC ActiveX controls [MFC], localizing
- LocaleID ambient property [MFC]
- LOCALIZE sample [MFC]
ms.assetid: a44b839a-c652-4ec5-b824-04392708a5f9
ms.openlocfilehash: a85ec5cbed797b756afd93cd8423c58d138a0625
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84615428"
---
# <a name="mfc-activex-controls-localizing-an-activex-control"></a>Controlli ActiveX MFC: localizzazione di un controllo ActiveX

Questo articolo illustra le procedure per localizzare le interfacce del controllo ActiveX.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

Se si desidera adattare un controllo ActiveX a un mercato internazionale, potrebbe essere necessario localizzare il controllo. Windows supporta molte lingue oltre all'inglese predefinito, tra cui tedesco, francese e svedese. Questo può presentare problemi per il controllo se l'interfaccia è solo in lingua inglese.

In generale, i controlli ActiveX devono basare sempre le proprie impostazioni locali sulla proprietà LocaleID di ambiente. Questa operazione può essere eseguita in tre modi:

- Caricare le risorse, always on demand, in base al valore corrente della proprietà LocaleID di ambiente. L'esempio di controlli ActiveX MFC [Localize](../overview/visual-cpp-samples.md) usa questa strategia.

- Caricare le risorse quando si crea l'istanza del primo controllo in base alla proprietà LocaleID di ambiente e usare queste risorse per tutte le altre istanze. Questo articolo illustra questa strategia.

    > [!NOTE]
    >  Questa operazione non funzionerà correttamente in alcuni casi, se le istanze future hanno impostazioni locali diverse.

- Usare la `OnAmbientChanged` funzione di notifica per caricare dinamicamente le risorse appropriate per le impostazioni locali del contenitore.

    > [!NOTE]
    >  Questa operazione funzionerà per il controllo, ma la DLL di runtime non aggiornerà in modo dinamico le proprie risorse quando la proprietà di ambiente LocaleID viene modificata. Inoltre, le DLL di run-time per i controlli ActiveX utilizzano le impostazioni locali del thread per determinare le impostazioni locali per le relative risorse.

Nella parte restante di questo articolo vengono descritte due strategie di localizzazione. La prima strategia [localizza l'interfaccia di programmabilità del controllo](#_core_localizing_your_control.92.s_programmability_interface) (nomi di proprietà, metodi ed eventi). La seconda strategia [localizza l'interfaccia utente del controllo](#_core_localizing_the_control.92.s_user_interface)usando la proprietà LocaleID di ambiente del contenitore. Per una dimostrazione della localizzazione dei controlli, vedere l'esempio di controlli ActiveX MFC [Localize](../overview/visual-cpp-samples.md).

## <a name="localizing-the-controls-programmability-interface"></a><a name="_core_localizing_your_control.92.s_programmability_interface"></a>Localizzazione dell'interfaccia di programmabilità del controllo

Quando si localizza l'interfaccia di programmabilità del controllo (l'interfaccia utilizzata dai programmatori che scrivono applicazioni che utilizzano il controllo), è necessario creare una versione modificata del controllo. File IDL (uno script per la compilazione della libreria dei tipi di controllo) per ogni lingua che si intende supportare. Questa è l'unica posizione in cui è necessario localizzare i nomi delle proprietà dei controlli.

Quando si sviluppa un controllo localizzato, includere l'ID delle impostazioni locali come attributo a livello di libreria dei tipi. Se ad esempio si desidera fornire una libreria dei tipi con nomi di proprietà localizzati in francese, creare una copia dell'esempio. File IDL e chiamata SAMPLEFR. IDL. Aggiungere un attributo ID impostazioni locali al file (l'ID delle impostazioni locali per il francese è 0x040C), simile al seguente:

[!code-cpp[NVC_MFC_AxLoc#1](codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_1.idl)]

Modificare i nomi delle proprietà in SAMPLEFR. IDL per gli equivalenti francesi, quindi usare MKTYPLIB. EXE per produrre la libreria dei tipi francese, SAMPLEFR. TLB.

Per creare più librerie dei tipi localizzate, è possibile aggiungere qualsiasi localizzata. File IDL per il progetto che verranno compilati automaticamente.

#### <a name="to-add-an-idl-file-to-your-activex-control-project"></a>Per aggiungere un oggetto. File IDL per il progetto di controllo ActiveX

1. Con il progetto di controllo aperto, scegliere **Aggiungi elemento esistente**dal menu **progetto** .

   Verrà visualizzata la finestra di dialogo **Aggiungi elemento esistente** .

1. Se necessario, selezionare l'unità e la directory da visualizzare.

1. Nella casella **file di tipo** selezionare **tutti i file ( \* . \* )**.

1. Nella casella di riepilogo file fare doppio clic su. File IDL che si desidera inserire nel progetto.

1. Quando sono stati aggiunti tutti i necessari, fare clic su **Apri** . File IDL.

Poiché i file sono stati aggiunti al progetto, verranno compilati quando viene compilato il resto del progetto. Le librerie dei tipi localizzate si trovano nella directory del progetto di controllo ActiveX corrente.

All'interno del codice, i nomi di proprietà interni (in genere in inglese) vengono sempre usati e non vengono mai localizzati. Sono incluse la mappa di invio del controllo, le funzioni di scambio delle proprietà e il codice di scambio dei dati della pagina delle proprietà.

Una sola libreria di tipi (. TLB) il file può essere associato alle risorse dell'implementazione del controllo (. OCX). Si tratta in genere della versione con i nomi standardizzati (in genere, in inglese). Per fornire una versione localizzata del controllo è necessario spedire il. OCX (che è già stato associato al valore predefinito. Versione TLB) e. TLB per le impostazioni locali appropriate. Ciò significa che solo. OCX è necessario per le versioni in lingua inglese, dal momento che la correzione è corretta. TLB è già stato associato. Per le altre impostazioni locali, è inoltre necessario che la libreria dei tipi localizzata venga fornita con. OCX.

Per assicurarsi che i client del controllo possano trovare la libreria dei tipi localizzata, registrare le impostazioni locali specifiche. File TLB nella sezione TypeLib del registro di sistema di Windows. A questo scopo, viene fornito il terzo parametro (normalmente facoltativo) della funzione [AfxOleRegisterTypeLib](reference/registering-ole-controls.md#afxoleregistertypelib) . Nell'esempio seguente viene registrata una libreria dei tipi francese per un controllo ActiveX:

[!code-cpp[NVC_MFC_AxLoc#2](codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_2.cpp)]

Quando il controllo viene registrato, la `AfxOleRegisterTypeLib` funzione Cerca automaticamente l'oggetto specificato. File TLB nella stessa directory del controllo che viene registrato nel database di registrazione di Windows. Se il. Il file TLB non è stato trovato, la funzione non ha alcun effetto.

## <a name="localizing-the-controls-user-interface"></a><a name="_core_localizing_the_control.92.s_user_interface"></a>Localizzazione dell'interfaccia utente del controllo

Per localizzare l'interfaccia utente di un controllo, inserire tutte le risorse visibili all'utente del controllo, ad esempio le pagine delle proprietà e i messaggi di errore, in dll di risorse specifiche della lingua. È quindi possibile usare la proprietà LocaleID di ambiente del contenitore per selezionare la DLL appropriata per le impostazioni locali dell'utente.

Nell'esempio di codice riportato di seguito viene illustrato un approccio per individuare e caricare la DLL di risorse per impostazioni locali specifiche. Questa funzione membro, chiamata `GetLocalizedResourceHandle` per questo esempio, può essere una funzione membro della classe del controllo ActiveX:

[!code-cpp[NVC_MFC_AxLoc#3](codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_3.cpp)]

Si noti che l'ID sottolingua può essere archiviato in ogni caso dell'istruzione switch, per fornire una localizzazione più specializzata. Per una dimostrazione di questa funzione, vedere la `GetResourceHandle` funzione nell'esempio di controlli ActiveX MFC [Localize](../overview/visual-cpp-samples.md).

Quando il controllo viene caricato per la prima volta in un contenitore, può chiamare [COleControl:: AmbientLocaleID](reference/colecontrol-class.md#ambientlocaleid) per recuperare l'ID delle impostazioni locali. Il controllo può quindi passare il valore dell'ID delle impostazioni locali restituito alla `GetLocalizedResourceHandle` funzione, che carica la libreria di risorse appropriata. Il controllo deve passare l'handle risultante, se presente, a [AfxSetResourceHandle](reference/application-information-and-management.md#afxsetresourcehandle):

[!code-cpp[NVC_MFC_AxLoc#4](codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_4.cpp)]

Inserire il codice di esempio precedente in una funzione membro del controllo, ad esempio un override di [COleControl:: OnSetClientSite](reference/colecontrol-class.md#onsetclientsite). Inoltre, *m_hResDLL* deve essere una variabile membro della classe del controllo.

È possibile usare una logica simile per la localizzazione della pagina delle proprietà di un controllo. Per localizzare la pagina delle proprietà, aggiungere codice simile all'esempio seguente al file di implementazione della pagina delle proprietà (in un override di [COlePropertyPage:: OnSetPageSite](reference/colepropertypage-class.md#onsetpagesite)):

[!code-cpp[NVC_MFC_AxLoc#5](codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)
