---
title: Creazione guidata controllo ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.control.overview
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, adding controls
- controls [ATL], adding to projects
- ATL Control Wizard
ms.assetid: 991f8e72-ffbc-4382-a4ce-e255acfba5b6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 381bb9505745331d2ef470c5fd4e8d55e5e742f8
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45705809"
---
# <a name="atl-control-wizard"></a>Creazione guidata controllo ATL

Gli inserimenti in un progetto ATL (o un progetto MFC con supporto ATL) in un controllo ATL. È possibile usare questa procedura guidata per inserire uno dei tre tipi di controlli:

- Controllo standard

- Controllo composito

- Controllo DHTML

Inoltre, è possibile specificare un controllo minimo, rimuovendo le interfacce dal [interfacce](../../atl/reference/interfaces-atl-control-wizard.md) elenco, che vengono forniti come valori predefiniti per i controlli aprire la maggior parte dei contenitori. È possibile impostare le interfacce da supportare per il controllo nel **interfacce** pagina della procedura guidata.

## <a name="remarks"></a>Note

Lo script di registrazione prodotto da questa procedura guidata registrerà i componenti COM in HKEY_CURRENT_USER anziché HKEY_LOCAL_MACHINE. Per modificare questo comportamento, impostare il **Registra componente per tutti gli utenti** opzione della procedura guidata.

## <a name="names"></a>Nomi

Specificare i nomi per l'oggetto dell'interfaccia e le classi da aggiungere al progetto. Ad eccezione di **nome breve**, tutte le altre caselle possono essere modificati in modo indipendente. Se si modifica il testo per **nome breve**, la modifica viene riflessa nei nomi di tutte le altre caselle in questa pagina. Se si modifica il **coclasse** nome nella sezione COM, la modifica viene riflessa nel **tipo** finestra, ma la **interfaccia** nome e **ProgID** si non modificare. Questo comportamento di denominazione è progettato per rendere facilmente identificabile tutti i nomi per l'utente quando si sviluppa il controllo.

> [!NOTE]
>  **Coclasse** è modificabile solo nei controlli. Se il progetto con attributi, non è possibile modificare **coclasse**.

### <a name="c"></a>C++

Vengono fornite informazioni per la classe C++ creata per implementare l'oggetto.

- **Nome breve**

   Imposta il nome abbreviato per l'oggetto. Il nome specificato determina la classe e **coclasse** i nomi di file (. CPP e. H) nomi di, il nome dell'interfaccia e il **tipo** nomi, a meno che non vengano modificati singolarmente questi campi.

- **Classe**

   Imposta il nome della classe che implementa l'oggetto. Questo nome è basato sul nome fornito nel **nome breve**, preceduto da "C", il prefisso standard per un nome di classe.

- **File con estensione h**

   Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome fornito nel **nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato o aggiungere la dichiarazione di classe a un file esistente. Se si seleziona un file esistente, il non verrà salvato nel percorso selezionato finché non si fare clic su **fine**.

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **File con estensione cpp**

   Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome fornito nel **nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **Fine** nella procedura guidata.

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se l'implementazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **Con attributi**

   Indica se l'oggetto utilizza gli attributi. Se si aggiunge un oggetto a un progetto ATL con attributo, questa opzione è selezionata e non può essere modificata. Vale a dire, è possibile aggiungere solo gli oggetti con attributi a un progetto creato con il supporto di attributo.

   È possibile aggiungere un oggetto con attributo solo a un progetto ATL che utilizza attributi. Se si seleziona questa opzione per un progetto ATL non ha attributo supporto, la procedura guidata chiederà di specificare se si desidera aggiungere il supporto di attributo per il progetto.

   Per impostazione predefinita, tutti gli oggetti aggiunti dopo aver impostato questa opzione vengono designati come oggetto con attributi (la casella di controllo è selezionata). È possibile deselezionare questa casella per aggiungere un oggetto che non usa gli attributi.

   Visualizzare [le impostazioni dell'applicazione, creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [meccanismi di base degli attributi](../../windows/basic-mechanics-of-attributes.md) per altre informazioni.

### <a name="com"></a>COM

Fornisce informazioni sulle funzionalità COM per l'oggetto.

- **Coclasse**

   Imposta il nome della classe del componente che contiene un elenco delle interfacce supportate dall'oggetto.

   > [!NOTE]
   > Se si crea il progetto mediante attributi oppure se questa pagina della procedura guidata si indica che il controllo utilizza gli attributi, è possibile modificare questa opzione perché ATL non include il **coclasse** attributo.

- **Interface**

   Imposta il nome dell'interfaccia per l'oggetto. Per impostazione predefinita un nome di interfaccia è preceduto da "I".

- **Type**

   Imposta la descrizione dell'oggetto che verrà visualizzato nel Registro di sistema

- **ProgID**

   Imposta il nome che i contenitori possano usare invece il CLSID dell'oggetto. Questo campo non viene popolato automaticamente. Se non si popolano manualmente questo campo, il controllo non siano disponibile ad altri strumenti. Ad esempio, i controlli ActiveX che vengono generati senza un `ProgID` non sono disponibili nel **Inserisci controllo ActiveX** nella finestra di dialogo. Per altre informazioni sulla finestra di dialogo, vedere [Finestra di dialogo Inserisci controllo ActiveX](../../windows/insert-activex-control-dialog-box.md).

## <a name="see-also"></a>Vedere anche

[Controllo ATL](../../atl/reference/adding-an-atl-control.md)   
[Aggiunta di funzionalità al controllo composito](../../atl/adding-functionality-to-the-composite-control.md)   
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)

