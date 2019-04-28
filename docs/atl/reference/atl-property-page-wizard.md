---
title: Creazione guidata pagina delle proprietà ATL
ms.date: 10/03/2018
f1_keywords:
- vc.codewiz.class.atl.ppg.overview
helpviewer_keywords:
- ATL projects, adding property pages
- ATL Property Page Wizard
ms.assetid: 6113e325-facd-4f68-b491-144d75209922
ms.openlocfilehash: 791901ab3181ad2c8ac862a970980250693d20f7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62248233"
---
# <a name="atl-property-page-wizard"></a>Creazione guidata pagina delle proprietà ATL

Questa procedura guidata [aggiunge una pagina delle proprietà in un progetto ATL](../../atl/reference/adding-an-atl-property-page.md) o a un progetto MFC con supporto ATL. Una pagina delle proprietà ATL fornisce un'interfaccia utente per impostare le proprietà (o la chiamata ai metodi) di uno o più oggetti COM.

> [!WARNING]
> In Visual Studio 2017 versione 15.9 questa procedura guidata del codice è deprecata e verrà rimossa in una versione futura di Visual Studio. Questa procedura guidata viene usata raramente. Il supporto generale per ATL e MFC non subisce attualmente l'effetto della rimozione di questa procedura guidata. Se vuoi condividere i tuoi commenti e suggerimenti su questa deprecazione, compila il [presente sondaggio](https://www.surveymonkey.com/r/QDWKKCN). I tuoi commenti e suggerimenti sono importanti per noi.

## <a name="remarks"></a>Note

A partire da Visual Studio 2008, lo script di registrazione prodotto da questa procedura guidata registrerà i componenti COM sotto **HKEY_CURRENT_USER** invece di **HKEY_LOCAL_MACHINE**. Per modificare questo comportamento, impostare il **Registra componente per tutti gli utenti** opzione della procedura guidata.

## <a name="names"></a>Nomi

Specificare i nomi per l'oggetto dell'interfaccia e le classi da aggiungere al progetto. Ad eccezione di **nome breve**, tutte le altre caselle possono essere modificate in modo indipendente. Se si modifica il testo per **nome breve**, la modifica viene riflessa nei nomi di tutte le altre caselle in questa pagina. Se si modifica il **coclasse** nome nella sezione COM, la modifica viene riflessa nel **tipo** e **ProgID** caselle. Questo comportamento di denominazione è progettato per rendere facilmente identificabile tutti i nomi per l'utente quando si sviluppa la pagina delle proprietà.

> [!NOTE]
>  **Coclasse** è modificabile solo nei progetti. Se il progetto con attributi, non è possibile modificare **coclasse**.

### <a name="c"></a>C++

Vengono fornite informazioni per la classe C++ creata per implementare l'oggetto.

|||
|-|-|
|Termine|Definizione|
|**Nome breve**|Imposta il nome abbreviato per l'oggetto. Il nome specificato determina la classe e **coclasse** assegna un nome, il file (**. cpp** e **. h**) i nomi, il **tipo** nome e la  **ProgID**, a meno che non vengano modificati singolarmente questi campi.|
|**File con estensione h**|Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome fornito nel **nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato o aggiungere la dichiarazione di classe a un file esistente. Se si seleziona un file esistente, il non verrà salvato nel percorso selezionato finché non si fare clic su **fine** nella procedura guidata.<br /><br /> La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.|
|**Classe**|Imposta il nome della classe che implementa l'oggetto. Questo nome è basato sul nome fornito nel **nome breve**, preceduto da "C", il prefisso standard per un nome di classe.|
|**File con estensione cpp**|Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome fornito nel **nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **Fine** nella procedura guidata.<br /><br /> La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se l'implementazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.|
|**Con attributi**|Indica se l'oggetto utilizza gli attributi. Se si aggiunge un oggetto a un progetto ATL con attributo, questa opzione è selezionata e non può essere modificata, vale a dire, è possibile aggiungere attribuite solo gli oggetti a un progetto creato con il supporto di attributo.<br /><br /> È possibile aggiungere un oggetto con attributo solo a un progetto ATL che utilizza attributi. Se si seleziona questa opzione per un progetto ATL non ha attributo supporto, la procedura guidata chiederà di specificare se si desidera aggiungere il supporto di attributo per il progetto.<br /><br /> Per impostazione predefinita, tutti gli oggetti aggiunti dopo aver impostato questa opzione vengono designati come oggetto con attributi (la casella di controllo è selezionata). È possibile deselezionare questa casella per aggiungere un oggetto che non usa gli attributi.<br /><br /> Visualizzare [le impostazioni dell'applicazione, creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [meccanismi di base degli attributi](../../windows/basic-mechanics-of-attributes.md) per altre informazioni.|

### <a name="com"></a>COM

Fornisce informazioni sulle funzionalità COM per l'oggetto.

- **Coclasse**

   Imposta il nome della classe del componente che contiene un elenco delle interfacce supportate dall'oggetto.

   > [!NOTE]
   > Se si crea il progetto mediante attributi oppure se questa pagina della procedura guidata si indica che la pagina delle proprietà utilizza gli attributi, è possibile modificare questa opzione perché ATL non include il `coclass` attributo.

- **Type**

   Imposta la descrizione dell'oggetto che verrà visualizzato nel Registro di sistema

- **ProgID**

   Imposta il nome che i contenitori possano usare invece il CLSID dell'oggetto.

## <a name="see-also"></a>Vedere anche

[Opzioni, creazione guidata pagina delle proprietà ATL](../../atl/reference/options-atl-property-page-wizard.md)<br/>
[Stringhe, creazione guidata pagina delle proprietà ATL](../../atl/reference/strings-atl-property-page-wizard.md)<br/>
[Esempio: implementazione di una pagina delle proprietà](../../atl/example-implementing-a-property-page.md)
