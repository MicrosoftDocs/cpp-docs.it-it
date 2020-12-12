---
description: 'Ulteriori informazioni su: creazione guidata controllo ATL'
title: Creazione guidata controllo ATL
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.class.atl.control.overview
helpviewer_keywords:
- ATL projects, adding controls
- controls [ATL], adding to projects
- ATL Control Wizard
ms.assetid: 991f8e72-ffbc-4382-a4ce-e255acfba5b6
ms.openlocfilehash: 3dd36e9ad2e14a87b86a56b8c035c4d4f8407430
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97165433"
---
# <a name="atl-control-wizard"></a>Creazione guidata controllo ATL

Inserisce in un progetto ATL (o un progetto MFC con supporto ATL) un controllo ATL. È possibile utilizzare questa procedura guidata per inserire uno dei tre tipi di controlli seguenti:

- Controllo standard

- Controllo composito

- Controllo DHTML

Inoltre, è possibile specificare un controllo minimo, rimuovendo le interfacce dall'elenco [interfacce](../../atl/reference/interfaces-atl-control-wizard.md) , che vengono fornite come impostazioni predefinite per i controlli da aprire nella maggior parte dei contenitori. È possibile impostare le interfacce che si desidera supportare per il controllo nella pagina **interfacce** della procedura guidata.

## <a name="remarks"></a>Commenti

Lo script di registrazione prodotto da questa procedura guidata registrerà i componenti COM in HKEY_CURRENT_USER anziché HKEY_LOCAL_MACHINE. Per modificare questo comportamento, impostare l'opzione **Registra componente per tutti gli utenti** della procedura guidata.

## <a name="names"></a>Nomi

Specificare i nomi per l'oggetto, l'interfaccia e le classi da aggiungere al progetto. Ad eccezione del **nome breve**, tutte le altre caselle possono essere modificate in modo indipendente. Se si modifica il testo per **Nome breve**, la modifica viene applicata ai nomi di tutte le altre caselle in questa pagina. Se si modifica il nome della **coclasse** nella sezione com, la modifica viene riflessa nella casella **tipo** , ma il nome dell' **interfaccia** e il **ProgID** non cambiano. Questo comportamento di denominazione è progettato per rendere tutti i nomi facilmente identificabili durante lo sviluppo del controllo.

> [!NOTE]
> **Coclass** è modificabile solo su controlli senza attributi. Se il progetto è con attributi, non è possibile modificare **CoClass**.

### <a name="c"></a>C++

Fornisce informazioni per la classe C++ creata per implementare l'oggetto.

- **Nome breve**

   Imposta il nome abbreviato per l'oggetto. Il nome fornito determina i nomi della classe e della **coclasse** , ovvero il file (. CPP e. H) i nomi, il nome dell'interfaccia e i nomi dei **tipi** , a meno che non si modifichino singolarmente questi campi.

- **Classe**

   Imposta il nome della classe che implementa l'oggetto. Questo nome è basato sul nome specificato in **Nome breve**, preceduto da "C", il prefisso tipico per un nome di classe.

- **File con estensione h**

   Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome specificato in **Nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato o aggiungere la dichiarazione di classe a un file esistente. Se si seleziona un file esistente, la procedura guidata non lo salva nel percorso selezionato fino a quando non si fa clic su **fine**.

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **File con estensione cpp**

   Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome specificato in **Nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **Fine** nella procedura guidata.

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se l'implementazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **Con attributi**

   Indica se l'oggetto usa attributi. Se si aggiunge un oggetto a un progetto ATL con attributi, questa opzione è selezionata e non può essere modificata. Questo significa che è possibile aggiungere oggetti con attributi solo a un progetto creato con supporto per gli attributi.

   È possibile aggiungere un oggetto con attributi solo a un progetto ATL che usa attributi. Se si seleziona questa opzione per un progetto ATL che non include il supporto per gli attributi, la procedura guidata chiede di specificare se si vuole aggiungere il supporto per gli attributi al progetto.

   Per impostazione predefinita, qualsiasi oggetto aggiunto dopo aver impostato questa opzione viene designato come con attributi (la casella di controllo è selezionata). È possibile deselezionare questa casella per aggiungere un oggetto che non usa attributi.

   Per ulteriori informazioni [, vedere Impostazioni applicazione, creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [meccanismi di base degli attributi](../../windows/attributes/cpp-attributes-com-net.md#basic-mechanics-of-attributes) .

### <a name="com"></a>COM

Fornisce informazioni sulla funzionalità COM per l'oggetto.

- **Coclasse**

   Imposta il nome della classe del componente che contiene un elenco delle interfacce supportate dall'oggetto.

   > [!NOTE]
   > Se si crea il progetto usando gli attributi oppure se si indica in questa pagina della procedura guidata che il controllo Usa gli attributi, non è possibile modificare questa opzione perché ATL non include l'attributo **coclass** .

- **Interfaccia**

   Imposta il nome dell'interfaccia per l'oggetto. Per impostazione predefinita, il nome di un'interfaccia viene anteposto a "I".

- **Tipo**

   Imposta la descrizione dell'oggetto che verrà visualizzata nel Registro di sistema.

- **ProgID**

   Imposta il nome che può essere usato dai contenitori invece del CLSID dell'oggetto. Questo campo non viene popolato automaticamente. Se non si popola manualmente questo campo, il controllo potrebbe non essere disponibile per altri strumenti. Ad esempio, i controlli ActiveX generati senza a `ProgID` non sono disponibili nella finestra di dialogo **Inserisci controllo ActiveX** . Per ulteriori informazioni sulla finestra di dialogo, vedere [Insert ActiveX Controls](../../windows/adding-editing-or-deleting-controls.md#insert-activex-controls).

## <a name="see-also"></a>Vedi anche

[Controllo ATL](../../atl/reference/adding-an-atl-control.md)<br/>
[Aggiunta di funzionalità al controllo composito](../../atl/adding-functionality-to-the-composite-control.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)
