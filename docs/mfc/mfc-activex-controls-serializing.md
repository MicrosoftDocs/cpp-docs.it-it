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
ms.openlocfilehash: c06299f2fc7409476e4f5e5744ea11c962e3b173
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621193"
---
# <a name="mfc-activex-controls-serializing"></a>Controlli ActiveX MFC: serializzazione

Questo articolo illustra come serializzare un controllo ActiveX. La serializzazione è il processo di lettura o scrittura in un supporto di archiviazione persistente, ad esempio un file su disco. La libreria MFC (Microsoft Foundation Class) fornisce il supporto incorporato per la serializzazione nella classe `CObject` . `COleControl`estende questo supporto ai controlli ActiveX mediante l'utilizzo di un meccanismo di scambio di proprietà.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

La serializzazione per i controlli ActiveX viene implementata eseguendo l'override di [COleControl::D opropexchange](reference/colecontrol-class.md#dopropexchange). Questa funzione, chiamata durante il caricamento e il salvataggio dell'oggetto controllo, archivia tutte le proprietà implementate con una variabile membro o una variabile membro con notifica di modifica.

Negli argomenti seguenti vengono illustrati i principali problemi relativi alla serializzazione di un controllo ActiveX:

- Implementazione della `DoPropExchange` funzione per la serializzazione dell'oggetto Control

- [Personalizzazione del processo di serializzazione](#_core_customizing_the_default_behavior_of_dopropexchange)

- [Implementazione del supporto della versione](#_core_implementing_version_support)

## <a name="implementing-the-dopropexchange-function"></a><a name="_core_implementing_the_dopropexchange_function"></a>Implementazione della funzione DoPropExchange

Quando si utilizza la creazione guidata controllo ActiveX per generare il progetto di controllo, diverse funzioni di gestore predefinite vengono aggiunte automaticamente alla classe del controllo, inclusa l'implementazione predefinita di [COleControl::D opropexchange](reference/colecontrol-class.md#dopropexchange). Nell'esempio seguente viene illustrato il codice aggiunto alle classi create con la creazione guidata controllo ActiveX:

[!code-cpp[NVC_MFC_AxUI#43](codesnippet/cpp/mfc-activex-controls-serializing_1.cpp)]

Se si desidera rendere persistente una proprietà, modificare `DoPropExchange` mediante l'aggiunta di una chiamata alla funzione di scambio della proprietà. Nell'esempio seguente viene illustrata la serializzazione di una proprietà booleana CircleShape personalizzata, in cui la proprietà CircleShape ha un valore predefinito **true**:

[!code-cpp[NVC_MFC_AxSer#1](codesnippet/cpp/mfc-activex-controls-serializing_2.cpp)]
[!code-cpp[NVC_MFC_AxSer#2](codesnippet/cpp/mfc-activex-controls-serializing_3.cpp)]

Nella tabella seguente sono elencate le possibili funzioni di scambio di proprietà che è possibile utilizzare per serializzare le proprietà del controllo:

|Funzioni di scambio di proprietà|Scopo|
|---------------------------------|-------------|
|**PX_Blob ()**|Serializza una proprietà dati di tipo Binary Large Object (BLOB).|
|**PX_Bool ()**|Serializza una proprietà booleana di tipo.|
|**PX_Color ()**|Serializza una proprietà del colore del tipo.|
|**PX_Currency ()**|Serializza una proprietà **CY** (Currency) del tipo.|
|**PX_Double ()**|Serializza una proprietà **Double** di tipo.|
|**PX_Font ()**|Serializza una proprietà del tipo di carattere.|
|**PX_Float ()**|Serializza una proprietà **float** di tipo.|
|**PX_IUnknown ()**|Serializza una proprietà di tipo `LPUNKNOWN` .|
|**PX_Long ()**|Serializza una proprietà **Long** del tipo.|
|**PX_Picture ()**|Serializza una proprietà Picture del tipo.|
|**PX_Short ()**|Serializza una proprietà **short** del tipo.|
|**PXstring( )**|Serializza una proprietà di tipo `CString` .|
|**PX_ULong ()**|Serializza una proprietà **ULONG** di tipo.|
|**PX_UShort ()**|Serializza una proprietà **ushort** di tipo.|

Per ulteriori informazioni su queste funzioni di scambio di proprietà, vedere [persistenza dei controlli OLE](reference/persistence-of-ole-controls.md) nei *riferimenti a MFC*.

## <a name="customizing-the-default-behavior-of-dopropexchange"></a><a name="_core_customizing_the_default_behavior_of_dopropexchange"></a>Personalizzazione del comportamento predefinito di DoPropExchange

L'implementazione predefinita di `DoPropertyExchange` , come illustrato nell'argomento precedente, effettua una chiamata alla classe di base `COleControl` . In questo modo viene serializzato il set di proprietà supportato automaticamente da `COleControl` , che utilizza uno spazio di archiviazione maggiore rispetto alla serializzazione solo delle proprietà personalizzate del controllo. La rimozione di questa chiamata consente all'oggetto di serializzare solo le proprietà considerate importanti. Tutti gli Stati delle proprietà predefinite che il controllo ha implementato non verranno serializzati durante il salvataggio o il caricamento dell'oggetto controllo a meno che non si aggiungano in modo esplicito **PX_** le chiamate.

## <a name="implementing-version-support"></a><a name="_core_implementing_version_support"></a>Implementazione del supporto della versione

Il supporto della versione consente a un controllo ActiveX modificato di aggiungere nuove proprietà permanenti ed è comunque in grado di rilevare e caricare lo stato persistente creato da una versione precedente del controllo. Per rendere disponibile la versione di un controllo come parte dei dati persistenti, chiamare [COleControl:: ExchangeVersion](reference/colecontrol-class.md#exchangeversion) nella funzione del controllo `DoPropExchange` . Questa chiamata viene inserita automaticamente se il controllo ActiveX è stato creato mediante la creazione guidata controllo ActiveX. Può essere rimosso se non è necessario il supporto della versione. Tuttavia, il costo delle dimensioni del controllo è molto ridotto (4 byte) per la flessibilità aggiunta fornita dal supporto della versione.

Se il controllo non è stato creato con la creazione guidata controllo ActiveX, aggiungere una chiamata a `COleControl::ExchangeVersion` inserendo la riga seguente all'inizio della `DoPropExchange` funzione (prima della chiamata a `COleControl::DoPropExchange` ):

[!code-cpp[NVC_MFC_AxSer#1](codesnippet/cpp/mfc-activex-controls-serializing_2.cpp)]
[!code-cpp[NVC_MFC_AxSer#3](codesnippet/cpp/mfc-activex-controls-serializing_4.cpp)]

È possibile usare qualsiasi **valore DWORD** come numero di versione. I progetti generati dalla creazione guidata controllo ActiveX utilizzano `_wVerMinor` e `_wVerMajor` come valore predefinito. Si tratta di costanti globali definite nel file di implementazione della classe di controlli ActiveX del progetto. Nel resto della `DoPropExchange` funzione, è possibile chiamare [CPropExchange:: GetVersion](reference/cpropexchange-class.md#getversion) in qualsiasi momento per recuperare la versione che si sta salvando o recuperando.

Nell'esempio seguente, la versione 1 di questo controllo di esempio ha solo una proprietà "ReleaseDate". La versione 2 aggiunge una proprietà "OriginalDate". Se al controllo viene richiesto di caricare lo stato persistente dalla versione precedente, viene inizializzata la variabile membro per la nuova proprietà su un valore predefinito.

[!code-cpp[NVC_MFC_AxSer#4](codesnippet/cpp/mfc-activex-controls-serializing_5.cpp)]
[!code-cpp[NVC_MFC_AxSer#3](codesnippet/cpp/mfc-activex-controls-serializing_4.cpp)]

Per impostazione predefinita, un controllo "converte" i dati obsoleti nel formato più recente. Se, ad esempio, la versione 2 di un controllo carica i dati salvati dalla versione 1, scriverà il formato versione 2 quando verrà salvato di nuovo. Se si desidera che il controllo salvi i dati nel formato dell'ultima lettura, passare **false** come terzo parametro durante la chiamata a `ExchangeVersion` . Il terzo parametro è facoltativo e è **true** per impostazione predefinita.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)
