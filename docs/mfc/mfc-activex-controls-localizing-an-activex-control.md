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
ms.openlocfilehash: 987cde2117307cdb5940a31e6f01efb15c527b84
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364592"
---
# <a name="mfc-activex-controls-localizing-an-activex-control"></a>Controlli ActiveX MFC: localizzazione di un controllo ActiveX

In questo articolo vengono illustrate le procedure per la localizzazione delle interfacce dei controlli ActiveX.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per il nuovo sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [Controlli ActiveX](activex-controls.md).

Se si desidera adattare un controllo ActiveX a un mercato internazionale, è possibile localizzare il controllo. Windows supporta molte lingue oltre all'inglese predefinito, tra cui tedesco, francese e svedese. Questo può presentare problemi per il controllo se la sua interfaccia è solo in inglese.

In generale, i controlli ActiveX devono sempre basare le impostazioni locali sulla proprietà LocaleID di ambiente. Questa operazione può essere eseguita in tre modi:

- Caricare le risorse, sempre su richiesta, in base al valore corrente della proprietà LocaleID di ambiente. Questa strategia [viene](../overview/visual-cpp-samples.md) utilizzata dall'esempio di controlli ActiveX MFC.

- Caricare le risorse quando viene imvista il primo controllo, in base alla proprietà LocaleID di ambiente, e usarle per tutte le altre istanze. In questo articolo viene illustrata questa strategia.

    > [!NOTE]
    >  Questo non funzionerà correttamente in alcuni casi, se le istanze future hanno impostazioni locali diverse.

- Utilizzare `OnAmbientChanged` la funzione di notifica per caricare dinamicamente le risorse appropriate per le impostazioni locali del contenitore.

    > [!NOTE]
    >  Questo funzionerà per il controllo, ma la DLL di runtime non aggiornerà dinamicamente le proprie risorse quando la proprietà LocaleID di ambiente viene modificata. Inoltre, le DLL di runtime per i controlli ActiveX utilizzano le impostazioni locali del thread per determinare le impostazioni locali per le relative risorse.

Nella parte restante di questo articolo vengono descritte due strategie di localizzazione. La prima strategia [localizza l'interfaccia](#_core_localizing_your_control.92.s_programmability_interface) di programmabilità del controllo (nomi di proprietà, metodi ed eventi). La seconda strategia [localizza l'interfaccia utente del controllo](#_core_localizing_the_control.92.s_user_interface), utilizzando la proprietà LocaleID di ambiente del contenitore. Per una dimostrazione della localizzazione dei controlli, vedere l'esempio di controlli ActiveX MFC [LOCALEI-E](../overview/visual-cpp-samples.md).

## <a name="localizing-the-controls-programmability-interface"></a><a name="_core_localizing_your_control.92.s_programmability_interface"></a>Localizzazione dell'interfaccia di programmabilità del controlloLocalizing the Control's Programmability Interface

Quando si localizza l'interfaccia di programmabilità del controllo (l'interfaccia utilizzata dai programmatori che scrivono applicazioni che utilizzano il controllo), è necessario creare una versione modificata del controllo . File IDL (uno script per la compilazione della libreria dei tipi di controllo) per ogni linguaggio che si intende supportare. Questa è l'unica posizione in cui è necessario localizzare i nomi delle proprietà del controllo.

Quando si sviluppa un controllo localizzato, includere l'ID delle impostazioni locali come attributo a livello di libreria dei tipi. Ad esempio, se si desidera fornire una libreria dei tipi con nomi di proprietà localizzate in francese, creare una copia del SAMPLE. IDL e chiamarlo SAMPLEFR. Idl. Aggiungere un attributo ID impostazioni locali al file (l'ID delle impostazioni locali per il francese è 0x040c), analogamente al seguente:

[!code-cpp[NVC_MFC_AxLoc#1](../mfc/codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_1.idl)]

Modificare i nomi delle proprietà in SAMPLEFR. IDL ai rispettivi equivalenti francesi, quindi utilizzare MKTYPLIB. EXE per produrre la libreria dei tipi francese, SAMPLEFR. Tlb.

Per creare più librerie di tipi localizzate è possibile aggiungere qualsiasi libreria localizzata . IDL al progetto e verranno compilati automaticamente.

#### <a name="to-add-an-idl-file-to-your-activex-control-project"></a>Per aggiungere un file . File IDL nel progetto di controllo ActiveX

1. Con il progetto di controllo aperto, scegliere **Aggiungi elemento esistente**dal menu **Progetto** .

   Verrà visualizzata la finestra di dialogo **Aggiungi elemento esistente.**

1. Se necessario, selezionare l'unità e la directory da visualizzare.

1. Nella casella **Tipo file** selezionare Tutti i file **(\*\*. )**.

1. Nella casella di riepilogo dei file fare doppio clic sul file . IDL che si desidera inserire nel progetto.

1. Fare clic su **Apri** dopo aver aggiunto tutto il necessario . File IDL.

Poiché i file sono stati aggiunti al progetto, verranno compilati al momento della compilazione del resto del progetto. Le librerie dei tipi localizzate si trovano nella directory del progetto di controllo ActiveX corrente.

All'interno del codice, i nomi delle proprietà interne (in genere in inglese) vengono sempre utilizzati e non vengono mai localizzati. Sono incluse la mappa di invio del controllo, le funzioni di scambio delle proprietà e il codice di scambio dei dati della pagina delle proprietà.

Solo una libreria dei tipi (. TLB) può essere associato alle risorse dell'implementazione del controllo (. OCX). Questa è in genere la versione con i nomi standardizzati (in genere, inglese). Per spedire una versione localizzata del controllo è necessario spedire il file . OCX (che è già stato associato all'impostazione predefinita . TLB) e il file . TLB per le impostazioni locali appropriate. Ciò significa che solo il file . OCX è necessario per le versioni in inglese, dal momento che il corretto . TLB è già stato legato ad esso. Per altre impostazioni locali, la libreria dei tipi localizzata deve essere fornita anche con il metodo . OCX.

Per assicurarsi che i client del controllo possano trovare la libreria dei tipi localizzata, registrare il file specifico delle impostazioni locali. TLB nella sezione TypeLib del Registro di sistema di Windows. Il terzo parametro (normalmente facoltativo) della funzione [AfxOleRegisterTypeLib](../mfc/reference/registering-ole-controls.md#afxoleregistertypelib) viene fornito a questo scopo. Nell'esempio seguente viene registrato una libreria dei tipi francese per un controllo ActiveX:The following example registers a French type library for an ActiveX control:

[!code-cpp[NVC_MFC_AxLoc#2](../mfc/codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_2.cpp)]

Quando il controllo viene `AfxOleRegisterTypeLib` registrato, la funzione cerca automaticamente l'oggetto specificato. TLB nella stessa directory del controllo e lo registra nel database di registrazione di Windows. Se il file . TLB non viene trovato, la funzione non ha alcun effetto.

## <a name="localizing-the-controls-user-interface"></a><a name="_core_localizing_the_control.92.s_user_interface"></a>Localizzazione dell'interfaccia utente del controllo

Per localizzare l'interfaccia utente di un controllo, inserire tutte le risorse visibili all'utente del controllo (ad esempio pagine delle proprietà e messaggi di errore) in DLL di risorse specifiche della lingua. È quindi possibile utilizzare la proprietà LocaleID di ambiente del contenitore per selezionare la DLL appropriata per le impostazioni locali dell'utente.

Esempio di codice seguente viene illustrato un approccio per individuare e caricare la DLL di risorse per le impostazioni locali specifiche. Questa funzione membro, chiamata per questo esempio, può essere una funzione membro della classe del controllo ActiveX:This member function, called `GetLocalizedResourceHandle` for this example, can be a member function of your ActiveX control class:

[!code-cpp[NVC_MFC_AxLoc#3](../mfc/codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_3.cpp)]

Si noti che l'ID della lingua secondaria può essere controllato in ogni caso dell'istruzione switch, per fornire una localizzazione più specializzata. Per una dimostrazione di `GetResourceHandle` questa funzione, vedere la funzione nell'esempio di controlli ActiveX MFC [(ESEMPIO DI controlli](../overview/visual-cpp-samples.md)ActiveX) LOCALI -

Quando il controllo viene caricato per la prima volta in un contenitore, può chiamare [COleControl::AmbientLocaleID](../mfc/reference/colecontrol-class.md#ambientlocaleid) per recuperare l'ID delle impostazioni locali. Il controllo può quindi passare il valore `GetLocalizedResourceHandle` dell'ID delle impostazioni locali restituito alla funzione, che carica la libreria di risorse appropriata. Il controllo deve passare l'handle risultante, se presente, ad [AfxSetResourceHandle](../mfc/reference/application-information-and-management.md#afxsetresourcehandle):

[!code-cpp[NVC_MFC_AxLoc#4](../mfc/codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_4.cpp)]

Inserire l'esempio di codice precedente in una funzione membro del controllo, ad esempio un override di [COleControl::OnSetClientSite](../mfc/reference/colecontrol-class.md#onsetclientsite). Inoltre, *m_hResDLL* deve essere una variabile membro della classe del controllo.

È possibile usare una logica simile per localizzare la pagina delle proprietà di un controllo. Per localizzare la pagina delle proprietà, aggiungere codice simile all'esempio seguente al file di implementazione della pagina delle proprietà (in un override di [COlePropertyPage::OnSetPageSite](../mfc/reference/colepropertypage-class.md#onsetpagesite)):

[!code-cpp[NVC_MFC_AxLoc#5](../mfc/codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)
