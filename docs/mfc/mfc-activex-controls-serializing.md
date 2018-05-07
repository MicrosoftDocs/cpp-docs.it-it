---
title: 'Controlli ActiveX MFC: Serializzazione | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- _wVerMinor
- DoPropExchange
- _wVerMajor
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 74d62411747dbe920b772b66d11cd1e2a789c5db
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mfc-activex-controls-serializing"></a>Controlli ActiveX MFC: serializzazione
In questo articolo viene illustrato come serializzare un controllo ActiveX. La serializzazione è il processo di lettura o scrittura su un supporto di archiviazione permanente, ad esempio un file su disco. La libreria Microsoft Foundation classe (MFC) fornisce supporto incorporato per la serializzazione in classe `CObject`. `COleControl` estende il supporto per controlli ActiveX tramite l'utilizzo di un meccanismo di scambio di proprietà.  
  
 La serializzazione per i controlli ActiveX viene implementata eseguendo l'override [DoPropExchange](../mfc/reference/colecontrol-class.md#dopropexchange). Questa funzione, chiamata durante il caricamento e salvataggio dell'oggetto controllo Archivia tutte le proprietà implementate con una variabile membro o una variabile membro con notifica di modifica.  
  
 Negli argomenti seguenti vengono illustrano i problemi principali correlati per la serializzazione di un controllo ActiveX:  
  
-   Implementazione di `DoPropExchange` per serializzare l'oggetto di controllo (funzione)  
  
-   [Personalizzazione del processo di serializzazione](#_core_customizing_the_default_behavior_of_dopropexchange)  
  
-   [Implementazione di supporto della versione](#_core_implementing_version_support)  
  
##  <a name="_core_implementing_the_dopropexchange_function"></a> Implementazione della funzione DoPropExchange  
 Quando si utilizza la creazione guidata controllo ActiveX per generare il progetto di controllo, diverse funzioni predefinite di gestione vengono automaticamente aggiunti alla classe del controllo, tra cui l'implementazione predefinita di [DoPropExchange](../mfc/reference/colecontrol-class.md#dopropexchange). Nell'esempio seguente viene illustrato il codice aggiunto alle classi create con la creazione guidata controllo ActiveX:  
  
 [!code-cpp[NVC_MFC_AxUI#43](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_1.cpp)]  
  
 Se si desidera rendere permanente una proprietà, modificare `DoPropExchange` aggiungendo una chiamata alla funzione di exchange di proprietà. L'esempio seguente illustra la serializzazione di una proprietà personalizzata CircleShape booleano, in cui la proprietà CircleShape ha un valore predefinito di **TRUE**:  
  
 [!code-cpp[NVC_MFC_AxSer#1](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_2.cpp)]  
[!code-cpp[NVC_MFC_AxSer#2](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_3.cpp)]  
  
 Nella tabella seguente sono elencate le funzioni di scambio di proprietà possibili che è possibile utilizzare per serializzare le proprietà del controllo:  
  
|Funzioni di scambio di proprietà|Scopo|  
|---------------------------------|-------------|  
|**PX_Blob)**|Serializza un tipo di proprietà di dati BLOB Binary Large Object ().|  
|**PX_Bool)**|Serializza una proprietà di tipo Boolean.|  
|**PX_Color)**|Serializza una proprietà color di tipo.|  
|**PX_Currency)**|Serializza un tipo **CY** proprietà (valuta).|  
|**PX_Double)**|Serializza un tipo **doppie** proprietà.|  
|**PX_Font)**|Serializza una proprietà di tipo carattere.|  
|**PX_Float)**|Serializza un tipo **float** proprietà.|  
|**PX_IUnknown)**|Serializza una proprietà di tipo `LPUNKNOWN`.|  
|**PX_Long)**|Serializza un tipo **lungo** proprietà.|  
|**PX_Picture)**|Serializza un tipo di proprietà immagine.|  
|**PX_Short)**|Serializza un tipo **breve** proprietà.|  
|**PXstring)**|Serializza un tipo `CString` proprietà.|  
|**PX_ULong)**|Serializza un tipo **ULONG** proprietà.|  
|**PX_UShort)**|Serializza un tipo **USHORT** proprietà.|  
  
 Per ulteriori informazioni su queste funzioni di scambio di proprietà, vedere [persistenza dei controlli OLE](../mfc/reference/persistence-of-ole-controls.md) nel *riferimenti alla libreria MFC*.  
  
##  <a name="_core_customizing_the_default_behavior_of_dopropexchange"></a> Personalizzazione del comportamento predefinito del DoPropExchange  
 L'implementazione predefinita di **DoPropertyExchange** (come illustrato nell'argomento precedente) effettua una chiamata a classe di base `COleControl`. Serializza il set di proprietà supportate automaticamente da `COleControl`, che utilizza spazio di archiviazione di serializzazione solo le proprietà personalizzate del controllo. La rimozione di questa chiamata consente all'oggetto serializzare solo le proprietà che sono considerate importanti. Stati qualsiasi proprietà predefinita è implementato il controllo non verranno serializzati durante il salvataggio o caricamento l'oggetto di controllo se non si aggiunge in modo esplicito **px** chiama per loro.  
  
##  <a name="_core_implementing_version_support"></a> Implementazione di supporto della versione  
 Supporto della versione attiva un controllo ActiveX modificato aggiungere nuove proprietà persistenti e comunque in grado di individuare e caricare lo stato persistente creato da una versione precedente del controllo. Per rendere disponibile una versione del controllo come parte dei dati persistenti, chiamare [COleControl:: ExchangeVersion](../mfc/reference/colecontrol-class.md#exchangeversion) del controllo `DoPropExchange` (funzione). Questa chiamata viene inserita automaticamente se il controllo ActiveX è stato creato utilizzando la creazione guidata controllo ActiveX. Può essere rimosso se non è necessario il supporto della versione. Tuttavia, il costo di dimensioni del controllo è molto piccola (4 byte) per un'ulteriore flessibilità che fornisce il supporto della versione.  
  
 Se il controllo non è stato creato con la creazione guidata controllo ActiveX, aggiungere una chiamata a `COleControl::ExchangeVersion` inserendo la riga seguente all'inizio del `DoPropExchange` funzione (prima della chiamata a `COleControl::DoPropExchange`):  
  
 [!code-cpp[NVC_MFC_AxSer#1](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_2.cpp)]  
[!code-cpp[NVC_MFC_AxSer#3](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_4.cpp)]  
  
 È possibile utilizzare qualsiasi `DWORD` come il numero di versione. Utilizzano i progetti generati dalla creazione guidata controllo ActiveX **wVerMinor** e **wVerMajor** come impostazione predefinita. Questi sono costanti globali definite nel file di implementazione della classe del controllo ActiveX del progetto. Nel resto del `DoPropExchange` funzione, è possibile chiamare [CPropExchange:: GetVersion](../mfc/reference/cpropexchange-class.md#getversion) in qualsiasi momento per recuperare la versione che si salvino o il recupero.  
  
 Nell'esempio seguente, la versione 1 di questo controllo ha una proprietà "ReleaseDate". Versione 2 aggiunge una proprietà "OriginalDate". Se il controllo viene richiesto di caricare lo stato permanente dalla versione precedente, inizializza la variabile membro per la nuova proprietà a un valore predefinito.  
  
 [!code-cpp[NVC_MFC_AxSer#4](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_5.cpp)]  
[!code-cpp[NVC_MFC_AxSer#3](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_4.cpp)]  
  
 Per impostazione predefinita, un controllo "converte" vecchi dati in formato più recente. Ad esempio, se la versione 2 di un controllo carica i dati che è stati salvati dalla versione 1, scriverà il formato della versione 2 quando viene salvato nuovamente. Se si desidera il controllo per salvare i dati in formato ultima lettura, passare **FALSE** come terzo parametro quando si chiama `ExchangeVersion`. Il terzo parametro è facoltativo ed è **TRUE** per impostazione predefinita.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

