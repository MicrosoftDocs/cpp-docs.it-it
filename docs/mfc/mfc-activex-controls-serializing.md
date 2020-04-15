---
title: 'Controlli ActiveX MFC: serializzazione'
ms.date: 09/12/2018
f1_keywords:
- _wVerMinor
- DoPropExchange
- _wVerMajor
helpviewer_keywords:
- MFC ActiveX controls [MFC], version support
- wVerMinor global constant [MFC]
- GetVersion method [MFC]
- ExchangeVersion method [MFC]
- MFC ActiveX controls [MFC], serializing
- DoPropExchange method [MFC]
- versioning ActiveX controls
- wVerMajor global constant
ms.assetid: 9d57c290-dd8c-4853-b552-6f17f15ebedd
ms.openlocfilehash: d804486b612906f537b6ed1665dfc0cec5149826
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364538"
---
# <a name="mfc-activex-controls-serializing"></a>Controlli ActiveX MFC: serializzazione

In questo articolo viene illustrato come serializzare un controllo ActiveX. La serializzazione è il processo di lettura o scrittura su un supporto di archiviazione persistente, ad esempio un file su disco. La libreria MFC (Microsoft Foundation Class) fornisce il `CObject`supporto incorporato per la serializzazione nella classe . `COleControl`estende questo supporto ai controlli ActiveX tramite l'utilizzo di un meccanismo di scambio di proprietà.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per il nuovo sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [Controlli ActiveX](activex-controls.md).

La serializzazione per i controlli ActiveX viene implementata eseguendo l'override di [COleControl::DoPropExchange](../mfc/reference/colecontrol-class.md#dopropexchange). Questa funzione, chiamata durante il caricamento e il salvataggio dell'oggetto controllo, archivia tutte le proprietà implementate con una variabile membro o una variabile membro con notifica di modifica.

Negli argomenti seguenti vengono illustrati i principali problemi relativi alla serializzazione di un controllo ActiveX:

- Implementazione della `DoPropExchange` funzione per serializzare l'oggetto controlloImplementing function to serialize your control object

- [Personalizzazione del processo di serializzazioneCustomizing the Serialization Process](#_core_customizing_the_default_behavior_of_dopropexchange)

- [Implementazione del supporto della versioneImplementing Version Support](#_core_implementing_version_support)

## <a name="implementing-the-dopropexchange-function"></a><a name="_core_implementing_the_dopropexchange_function"></a>Implementazione della funzione DoPropExchange

Quando si utilizza la Creazione guidata controllo ActiveX per generare il progetto di controllo, diverse funzioni di gestione predefinite vengono aggiunte automaticamente alla classe del controllo, inclusa l'implementazione predefinita di [COleControl::DoPropExchange](../mfc/reference/colecontrol-class.md#dopropexchange). Nell'esempio seguente viene illustrato il codice aggiunto alle classi create con la Creazione guidata controllo ActiveX:

[!code-cpp[NVC_MFC_AxUI#43](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_1.cpp)]

Se si desidera rendere persistente `DoPropExchange` una proprietà, modificarla aggiungendo una chiamata alla funzione di scambio delle proprietà. Nell'esempio seguente viene illustrata la serializzazione di una proprietà CircleShape booleana personalizzata, in cui il valore predefinito della proprietà CircleShape è **TRUE**:

[!code-cpp[NVC_MFC_AxSer#1](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_2.cpp)]
[!code-cpp[NVC_MFC_AxSer#2](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_3.cpp)]

Nella tabella seguente sono elencate le possibili funzioni di scambio delle proprietà che è possibile utilizzare per serializzare le proprietà del controllo:

|Funzioni di scambio di proprietà|Scopo|
|---------------------------------|-------------|
|**PX_Blob( )**|Serializza una proprietà di dati BLOB (Binary Large Object) di tipo.|
|**PX_Bool( )**|Serializza una proprietà booleana di tipo.|
|**PX_Color( )**|Serializza una proprietà di tipo color.|
|**PX_Currency( )**|Serializza una proprietà CY (valuta) **di** tipo.|
|**PX_Double( )**|Serializza una proprietà **double** di tipo.|
|**PX_Font( )**|Serializza un Font tipo proprietà.|
|**PX_Float( )**|Serializza una proprietà **float** del tipo.|
|**PX_IUnknown( )**|Serializza una `LPUNKNOWN`proprietà di tipo .|
|**PX_Long( )**|Serializza una proprietà **long** di tipo.|
|**PX_Picture( )**|Serializza una proprietà Picture di tipo.|
|**PX_Short( )**|Serializza una proprietà **short** di tipo.|
|**StringaP( )**|Serializza `CString` una proprietà del tipo.|
|**PX_ULong( )**|Serializza una proprietà **ULONG di** tipo.|
|**PX_UShort( )**|Serializza una proprietà **USHORT di** tipo.|

Per ulteriori informazioni su queste funzioni di scambio di proprietà, vedere [Persistenza dei controlli OLE](../mfc/reference/persistence-of-ole-controls.md) in *Riferimenti a MFC*.

## <a name="customizing-the-default-behavior-of-dopropexchange"></a><a name="_core_customizing_the_default_behavior_of_dopropexchange"></a>Personalizzazione del comportamento predefinito di DoPropExchange

L'implementazione `DoPropertyExchange` predefinita di (come illustrato nell'argomento `COleControl`precedente) effettua una chiamata alla classe base . In questo modo il set `COleControl`di proprietà supportato automaticamente da , che utilizza più spazio di archiviazione rispetto alla serializzazione solo delle proprietà personalizzate del controllo. La rimozione di questa chiamata consente all'oggetto di serializzare solo le proprietà considerate importanti. Qualsiasi proprietà predefinita indica che il controllo ha implementato non verrà serializzato durante il salvataggio o il caricamento dell'oggetto controllo a meno che non si aggiunge in modo esplicito **PX_** li chiama.

## <a name="implementing-version-support"></a><a name="_core_implementing_version_support"></a>Implementazione del supporto della versioneImplementing Version Support

Il supporto della versione consente a un controllo ActiveX rivisto di aggiungere nuove proprietà persistenti e di essere comunque in grado di rilevare e caricare lo stato persistente creato da una versione precedente del controllo. Per rendere disponibile la versione di un controllo come parte dei dati persistenti, chiamare `DoPropExchange` [COleControl::ExchangeVersion](../mfc/reference/colecontrol-class.md#exchangeversion) nella funzione del controllo. Questa chiamata viene inserita automaticamente se il controllo ActiveX è stato creato utilizzando la Creazione guidata controllo ActiveX. Può essere rimosso se non è necessario il supporto della versione. Tuttavia, il costo nella dimensione del controllo è molto piccolo (4 byte) per la flessibilità aggiuntiva fornita dal supporto della versione.

Se il controllo non è stato creato con la `COleControl::ExchangeVersion` Creazione guidata controllo ActiveX, `DoPropExchange` aggiungere una chiamata `COleControl::DoPropExchange`a inserendo la riga seguente all'inizio della funzione (prima della chiamata a ):

[!code-cpp[NVC_MFC_AxSer#1](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_2.cpp)]
[!code-cpp[NVC_MFC_AxSer#3](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_4.cpp)]

È possibile utilizzare qualsiasi **DWORD** come numero di versione. I progetti generati dalla Creazione `_wVerMinor` `_wVerMajor` guidata controllo ActiveX utilizzano e come impostazione predefinita. Si tratta di costanti globali definite nel file di implementazione della classe del controllo ActiveX del progetto. All'interno del `DoPropExchange` resto della funzione, è possibile chiamare [CPropExchange::GetVersion](../mfc/reference/cpropexchange-class.md#getversion) in qualsiasi momento per recuperare la versione che si sta salvando o recuperando.

Nell'esempio seguente, la versione 1 di questo controllo di esempio ha solo una proprietà "ReleaseDate". La versione 2 aggiunge una proprietà "OriginalDate". Se al controllo viene richiesto di caricare lo stato persistente dalla versione precedente, inizializza la variabile membro per la nuova proprietà su un valore predefinito.

[!code-cpp[NVC_MFC_AxSer#4](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_5.cpp)]
[!code-cpp[NVC_MFC_AxSer#3](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_4.cpp)]

Per impostazione predefinita, un controllo "converte" i dati precedenti nel formato più recente. Ad esempio, se la versione 2 di un controllo carica i dati salvati dalla versione 1, scriverà il formato della versione 2 quando viene salvato di nuovo. Se si desidera che il controllo salvi **FALSE** i dati nel `ExchangeVersion`formato ultima lettura, passare FALSE come terzo parametro quando si chiama . Questo terzo parametro è facoltativo e è **TRUE** per impostazione predefinita.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)
