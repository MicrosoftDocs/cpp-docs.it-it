---
title: 'Controlli ActiveX MFC: Serializzazione | Microsoft Docs'
ms.custom: ''
ms.date: 09/12/2018
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
ms.openlocfilehash: 6fb70b11fc1a926914fe661607f18259a0608c85
ms.sourcegitcommit: b4432d30f255f0cb58dce69cbc8cbcb9d44bc68b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/13/2018
ms.locfileid: "45535067"
---
# <a name="mfc-activex-controls-serializing"></a>Controlli ActiveX MFC: serializzazione
Questo articolo illustra come eseguire la serializzazione di un controllo ActiveX. La serializzazione è il processo di lettura o scrittura su un supporto di archiviazione permanente, ad esempio un file su disco. La libreria Microsoft Foundation classi (MFC) fornisce supporto incorporato per la serializzazione in classe `CObject`. `COleControl` estende il supporto per i controlli ActiveX tramite l'uso di un meccanismo di scambio di proprietà.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituisce ActiveX, vedere [controlli ActiveX](activex-controls.md).  
  
 La serializzazione per i controlli ActiveX viene implementata eseguendo l'override [DoPropExchange](../mfc/reference/colecontrol-class.md#dopropexchange). Questa funzione, chiamata durante il caricamento e salvataggio dell'oggetto di controllo, archivia tutte le proprietà implementate con una variabile membro o una variabile membro con la notifica delle modifiche.  
  
 Gli argomenti seguenti descrivono i problemi principali legati alla serializzazione di un controllo ActiveX:  
  
-   Implementazione `DoPropExchange` per serializzare l'oggetto di controllo (funzione)  
  
-   [Personalizzazione del processo di serializzazione](#_core_customizing_the_default_behavior_of_dopropexchange)  
  
-   [Implementazione di supporto della versione](#_core_implementing_version_support)  
  
##  <a name="_core_implementing_the_dopropexchange_function"></a> Implementazione della funzione di DoPropExchange  
 Quando si usa la creazione guidata controllo ActiveX per generare il progetto di controllo, diverse funzioni predefinite di gestione vengono automaticamente aggiunti alla classe del controllo, tra cui l'implementazione predefinita di [DoPropExchange](../mfc/reference/colecontrol-class.md#dopropexchange). Nell'esempio seguente viene illustrato il codice aggiunto per le classi create con Creazione guidata controllo ActiveX:  
  
 [!code-cpp[NVC_MFC_AxUI#43](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_1.cpp)]  
  
 Se si vuole rendere persistente una proprietà, modificare `DoPropExchange` aggiungendo una chiamata alla funzione di scambio di proprietà. Nell'esempio seguente viene illustrata la serializzazione di una proprietà booleana CircleShape personalizzata, in cui la proprietà CircleShape ha un valore predefinito di **TRUE**:  
  
 [!code-cpp[NVC_MFC_AxSer#1](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_2.cpp)]  
[!code-cpp[NVC_MFC_AxSer#2](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_3.cpp)]  
  
 La tabella seguente elenca le funzioni di scambio possibili proprietà che è possibile usare per serializzare le proprietà del controllo:  
  
|Funzioni di proprietà exchange|Scopo|  
|---------------------------------|-------------|  
|**PX_Blob)**|Serializza un tipo di proprietà di dati di oggetti BLOB (Binary Large).|  
|**PX_Bool)**|Serializza un tipo booleano della proprietà.|  
|**PX_Color)**|Serializza una proprietà di colore del tipo.|  
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
  
 Per altre informazioni su queste funzioni di scambio di proprietà, vedere [persistenza dei controlli OLE](../mfc/reference/persistence-of-ole-controls.md) nel *riferimento MFC*.  
  
##  <a name="_core_customizing_the_default_behavior_of_dopropexchange"></a> Personalizzazione del comportamento predefinito del DoPropExchange  
 L'implementazione predefinita di `DoPropertyExchange` (come illustrato nell'argomento precedente) effettua una chiamata alla classe di base `COleControl`. Serializza l'insieme di proprietà supportate automaticamente da `COleControl`, che usa più spazio di archiviazione rispetto a serializzare solo le proprietà personalizzate del controllo. Rimozione di questa chiamata consente all'oggetto serializzare solo le proprietà che sono considerate importanti. Eventuali stati di proprietà predefinite ha implementato il controllo non verranno serializzati durante il salvataggio o caricamento l'oggetto di controllo, a meno che non venga esplicitamente aggiunto **px _** chiama per loro.  
  
##  <a name="_core_implementing_version_support"></a> Implementazione di supporto della versione  
 Supporto delle versioni consente a un controllo ActiveX rivisto aggiungere nuove proprietà persistenti e ancora essere in grado di rilevare e caricare lo stato permanente creato da una versione precedente del controllo. Per rendere disponibile una versione del controllo come parte dei dati persistenti, chiamare [COleControl:: ExchangeVersion](../mfc/reference/colecontrol-class.md#exchangeversion) del controllo `DoPropExchange` (funzione). Questa chiamata viene inserita automaticamente se il controllo ActiveX è stato creato tramite la creazione guidata controllo ActiveX. Può essere rimosso se non è necessario il supporto della versione. Tuttavia, il costo di una dimensione del controllo è molto piccolo (4 byte) per un'ulteriore flessibilità che offre il supporto della versione.  
  
 Se il controllo non è stato creato con la creazione guidata controllo ActiveX, aggiungere una chiamata a `COleControl::ExchangeVersion` inserendo la riga seguente all'inizio del `DoPropExchange` funzione (prima della chiamata a `COleControl::DoPropExchange`):  
  
 [!code-cpp[NVC_MFC_AxSer#1](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_2.cpp)]  
[!code-cpp[NVC_MFC_AxSer#3](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_4.cpp)]  
  
 È possibile usare qualsiasi **DWORD** come il numero di versione. Usano i progetti generati dalla creazione guidata controllo ActiveX `_wVerMinor` e `_wVerMajor` come impostazione predefinita. Questi sono costanti globali definite nel file di implementazione della classe del controllo ActiveX del progetto. Nel resto del `DoPropExchange` funzione, è possibile chiamare [CPropExchange:: GetVersion](../mfc/reference/cpropexchange-class.md#getversion) in qualsiasi momento per recuperare la versione di salvataggio o il recupero.  
  
 Nell'esempio seguente, la versione 1 di questo controllo di esempio ha solo una proprietà "ReleaseDate". Versione 2 aggiunge una proprietà "OriginalDate". Se il controllo viene richiesto di caricare lo stato permanente dalla versione precedente, inizializza la variabile membro per la nuova proprietà su un valore predefinito.  
  
 [!code-cpp[NVC_MFC_AxSer#4](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_5.cpp)]  
[!code-cpp[NVC_MFC_AxSer#3](../mfc/codesnippet/cpp/mfc-activex-controls-serializing_4.cpp)]  
  
 Per impostazione predefinita, un controllo "converte" i dati precedenti al formato più recente. Ad esempio, se la versione 2 di un controllo carica i dati che è stati salvati dalla versione 1, scriverà il formato della versione 2 quando viene salvato anche in questo caso. Se si desidera il controllo per salvare i dati in formato ultima lettura, passare **FALSE** come terzo parametro quando si chiama `ExchangeVersion`. Il terzo parametro è facoltativo e viene **TRUE** per impostazione predefinita.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

