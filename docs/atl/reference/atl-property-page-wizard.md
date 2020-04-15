---
title: Creazione guidata pagina delle proprietà ATL
ms.date: 05/09/2019
f1_keywords:
- vc.codewiz.class.atl.ppg.overview
helpviewer_keywords:
- ATL projects, adding property pages
- ATL Property Page Wizard
ms.assetid: 6113e325-facd-4f68-b491-144d75209922
ms.openlocfilehash: eaf070d5a98a05dbe3102afac8317ffd59298ad2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321669"
---
# <a name="atl-property-page-wizard"></a>Creazione guidata pagina delle proprietà ATL

::: moniker range="vs-2019"

Questa procedura guidata non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=vs-2017"

Questa procedura guidata [aggiunge una pagina delle proprietà in un progetto ATL](../../atl/reference/adding-an-atl-property-page.md) o in un progetto MFC con supporto ATL. Una pagina delle proprietà ATL fornisce un'interfaccia utente per impostare le proprietà (o chiamare i metodi) di uno o più oggetti COM.

## <a name="remarks"></a>Osservazioni

A partire da Visual Studio 2008, lo script di registrazione prodotto da questa procedura guidata registra i componenti COM in **HKEY_CURRENT_USER** invece che in **HKEY_LOCAL_MACHINE**. Per modificare questo comportamento, impostare l'opzione **Registra componente per tutti gli utenti** della procedura guidata.

## <a name="names"></a>nomi

Specificare i nomi per l'oggetto, l'interfaccia e le classi da aggiungere al progetto. Ad eccezione di **Nome breve**, tutte le altre caselle possono essere modificate indipendentemente. Se si modifica il testo per **Nome breve**, la modifica viene applicata ai nomi di tutte le altre caselle in questa pagina. Se si modifica il nome di **CoClass** nella sezione COM, la modifica viene applicata alle caselle **Tipo** e **ProgID**. Questo comportamento di denominazione è progettato per rendere tutti i nomi facilmente identificabili durante lo sviluppo della pagina delle proprietà.

> [!NOTE]
> **CoClass** è modificabile solo in progetti senza attributi. Se il progetto è con attributi, non è possibile modificare **CoClass**.

### <a name="c"></a>C++

Fornisce informazioni per la classe C++ creata per implementare l'oggetto.

|||
|-|-|
|Termine|Definizione|
|**Nome breve**|Imposta il nome abbreviato per l'oggetto. Il nome specificato determina i nomi della classe e di **CoClass**, i nomi dei file (con estensioni **cpp** e **h**), il nome di **Tipo** e il valore di **ProgID**, a meno che questi campi non vengano modificati singolarmente.|
|**File con estensione h**|Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome specificato in **Nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato o aggiungere la dichiarazione di classe a un file esistente. Se si seleziona un file esistente, la procedura guidata non lo salverà nel percorso selezionato finché non si sceglie **Fine**.<br /><br /> La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.|
|**Class**|Imposta il nome della classe che implementa l'oggetto. Questo nome è basato sul nome specificato in **Nome breve**, preceduto da "C", il prefisso tipico per un nome di classe.|
|**File con estensione cpp**|Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome specificato in **Nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **Fine** nella procedura guidata.<br /><br /> La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se l'implementazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.|
|**Con attributi**|Indica se l'oggetto usa attributi. Se si aggiunge un oggetto a un progetto ATL con attributi, questa opzione è selezionata e non può essere modificata, ovvero è possibile aggiungere oggetti con attributi solo a un progetto creato con supporto per gli attributi.<br /><br /> È possibile aggiungere un oggetto con attributi solo a un progetto ATL che usa attributi. Se si seleziona questa opzione per un progetto ATL che non include il supporto per gli attributi, la procedura guidata chiede di specificare se si vuole aggiungere il supporto per gli attributi al progetto.<br /><br /> Per impostazione predefinita, qualsiasi oggetto aggiunto dopo aver impostato questa opzione viene designato come con attributi (la casella di controllo è selezionata). È possibile deselezionare questa casella per aggiungere un oggetto che non usa attributi.<br /><br /> Per altre informazioni, vedere [Impostazioni applicazione, Creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [Meccanismi di base degli attributi](../../windows/basic-mechanics-of-attributes.md).|

### <a name="com"></a>COM

Fornisce informazioni sulla funzionalità COM per l'oggetto.

- **CoClass**

   Imposta il nome della classe del componente che contiene un elenco delle interfacce supportate dall'oggetto.

   > [!NOTE]
   > Se si crea il progetto mediante attributi o se in questa pagina della procedura guidata si indica che la pagina delle proprietà usa attributi, non è possibile modificare questa opzione perché ATL non include l'attributo `coclass`.

- **Tipo**

   Imposta la descrizione dell'oggetto che verrà visualizzata nel Registro di sistema.

- **Progid**

   Imposta il nome che può essere usato dai contenitori invece del CLSID dell'oggetto.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Opzioni, Creazione guidata pagina delle proprietà ATL](../../atl/reference/options-atl-property-page-wizard.md)<br/>
[Stringhe, Creazione guidata pagina delle proprietà ATL](../../atl/reference/strings-atl-property-page-wizard.md)<br/>
[Esempio: implementazione di una pagina delle proprietà](../../atl/example-implementing-a-property-page.md)
