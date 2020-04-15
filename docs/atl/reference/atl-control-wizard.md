---
title: Creazione guidata controllo ATL
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.class.atl.control.overview
helpviewer_keywords:
- ATL projects, adding controls
- controls [ATL], adding to projects
- ATL Control Wizard
ms.assetid: 991f8e72-ffbc-4382-a4ce-e255acfba5b6
ms.openlocfilehash: a10c5c358901122dda37b395c1f0fa5cdc30ce30
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321705"
---
# <a name="atl-control-wizard"></a>Creazione guidata controllo ATL

Inserisce in un progetto ATL (o un progetto MFC con supporto ATL) un controllo ATL. È possibile utilizzare questa procedura guidata per inserire uno dei tre tipi di controlli seguenti:

- Controllo standard

- Controllo composito

- Controllo DHTML

Inoltre, è possibile specificare un controllo minimo, rimuovendo le interfacce dall'elenco [Interfacce,](../../atl/reference/interfaces-atl-control-wizard.md) che vengono fornite come impostazioni predefinite per i controlli da aprire nella maggior parte dei contenitori. È possibile impostare le interfacce che si desidera supportati per il controllo nella pagina **Interfacce** della procedura guidata.

## <a name="remarks"></a>Osservazioni

Lo script di registrazione prodotto da questa procedura guidata registrerà i relativi componenti COM in HKEY_CURRENT_USER anziché in HKEY_LOCAL_MACHINE. Per modificare questo comportamento, impostare l'opzione **Registra componente per tutti gli utenti** della procedura guidata.

## <a name="names"></a>nomi

Specificare i nomi per l'oggetto, l'interfaccia e le classi da aggiungere al progetto. Ad eccezione di **Nome breve**, tutte le altre caselle possono essere modificate in modo indipendente. Se si modifica il testo per **Nome breve**, la modifica viene applicata ai nomi di tutte le altre caselle in questa pagina. Se si modifica il nome **della coclasse** nella sezione COM, la modifica si riflette nella casella **Tipo,** ma il nome dell'interfaccia e **Interface** **ProgID** non cambiano. Questo comportamento di denominazione è progettato per rendere tutti i nomi facilmente identificabili durante lo sviluppo del controllo.

> [!NOTE]
> **La coclasse** è modificabile solo sui controlli senza attributi. Se il progetto è con attributi, non è possibile modificare **CoClass**.

### <a name="c"></a>C++

Fornisce informazioni per la classe C++ creata per implementare l'oggetto.

- **Nome breve**

   Imposta il nome abbreviato per l'oggetto. Il nome fornito determina i nomi della classe e della **coclasse,** ovvero il file (. CPP e . H) nomi, il nome dell'interfaccia e i nomi **Type,** a meno che non si modifichino singolarmente tali campi.

- **Class**

   Imposta il nome della classe che implementa l'oggetto. Questo nome è basato sul nome specificato in **Nome breve**, preceduto da "C", il prefisso tipico per un nome di classe.

- **File con estensione h**

   Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome specificato in **Nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato o aggiungere la dichiarazione di classe a un file esistente. Se si seleziona un file esistente, la procedura guidata non lo salverà nella posizione selezionata fino a quando non si fa clic su **Fine**.

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **File con estensione cpp**

   Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome specificato in **Nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **Fine** nella procedura guidata.

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se l'implementazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **Con attributi**

   Indica se l'oggetto usa attributi. Se si aggiunge un oggetto a un progetto ATL con attributi, questa opzione è selezionata e non può essere modificata. Questo significa che è possibile aggiungere oggetti con attributi solo a un progetto creato con supporto per gli attributi.

   È possibile aggiungere un oggetto con attributi solo a un progetto ATL che usa attributi. Se si seleziona questa opzione per un progetto ATL che non include il supporto per gli attributi, la procedura guidata chiede di specificare se si vuole aggiungere il supporto per gli attributi al progetto.

   Per impostazione predefinita, qualsiasi oggetto aggiunto dopo aver impostato questa opzione viene designato come con attributi (la casella di controllo è selezionata). È possibile deselezionare questa casella per aggiungere un oggetto che non usa attributi.

   Per altre informazioni, vedere [Impostazioni applicazione, Creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [Meccanismi di base degli attributi](../../windows/basic-mechanics-of-attributes.md).

### <a name="com"></a>COM

Fornisce informazioni sulla funzionalità COM per l'oggetto.

- **CoClass**

   Imposta il nome della classe del componente che contiene un elenco delle interfacce supportate dall'oggetto.

   > [!NOTE]
   > Se si crea il progetto utilizzando gli attributi o se si indica in questa pagina della procedura guidata che il controllo utilizza gli attributi, non è possibile modificare questa opzione perché ATL non include l'attributo **coclasse.**

- **Interfaccia**

   Imposta il nome dell'interfaccia per l'oggetto. Per impostazione predefinita, un nome di interfaccia viene anteposto a "I".

- **Tipo**

   Imposta la descrizione dell'oggetto che verrà visualizzata nel Registro di sistema.

- **Progid**

   Imposta il nome che può essere usato dai contenitori invece del CLSID dell'oggetto. Questo campo non viene compilato automaticamente. Se non si compila manualmente questo campo, il controllo potrebbe non essere disponibile per altri strumenti. Ad esempio, i controlli ActiveX `ProgID` generati senza un non sono disponibili nella finestra di dialogo **Inserisci controllo ActiveX.** Per ulteriori informazioni sulla finestra di dialogo, vedere Finestra di [dialogo Inserisci controllo ActiveX](../../windows/insert-activex-control-dialog-box.md).

## <a name="see-also"></a>Vedere anche

[Controllo ATL](../../atl/reference/adding-an-atl-control.md)<br/>
[Aggiunta di funzionalità al controllo compositoAdding Functionality to the Composite Control](../../atl/adding-functionality-to-the-composite-control.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)
