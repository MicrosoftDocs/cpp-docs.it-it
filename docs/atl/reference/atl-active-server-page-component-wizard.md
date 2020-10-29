---
title: Creazione guidata componente ASP ATL
ms.date: 05/09/2019
helpviewer_keywords:
- ASP components, creating in ATL
ms.assetid: 5a5cb904-dbbf-44ea-ad3d-2ddd14c1d3c5
ms.openlocfilehash: 191b739354827dc1b7f0fd22e5ba2fd57f7b14d0
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92923770"
---
# <a name="atl-active-server-page-component-wizard"></a>Creazione guidata componente ASP ATL

::: moniker range="msvc-160"

Questa procedura guidata non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=msvc-150"

Questa procedura guidata inserisce nel progetto un componente ASP (Active Server Pages). Microsoft Internet Information Services (IIS) usa componenti ASP come parte della propria architettura di sviluppo avanzato di pagine Web.

Usando questa procedura guidata, è possibile specificare il modello di threading del componente e il relativo supporto di aggregazione. È anche possibile indicare il supporto per l'interfaccia delle informazioni sugli errori, i punti di connessione e il marshalling con modello di threading Free.

## <a name="remarks"></a>Osservazioni

A partire da Visual Studio 2008, lo script di registrazione prodotto da questa procedura guidata registra i componenti COM in **HKEY_CURRENT_USER** invece che in **HKEY_LOCAL_MACHINE** . Per modificare questo comportamento, impostare l'opzione **Registra componente per tutti gli utenti** della procedura guidata.

## <a name="names"></a>Nomi

Specificare i nomi per l'oggetto, l'interfaccia e le classi da aggiungere al progetto. Ad eccezione di **Nome breve** , tutte le altre caselle possono essere modificate indipendentemente dalle altre. Se si modifica il testo per **Nome breve** , la modifica viene applicata ai nomi di tutte le altre caselle in questa pagina.

Se si modifica il nome di **CoClass** nella sezione COM, la modifica viene applicata alle caselle **Tipo** e **ProgID** , ma il nome di **Interfaccia** non viene modificato. Questo comportamento di denominazione è progettato per rendere tutti i nomi facilmente identificabili durante lo sviluppo del controllo.

### <a name="c"></a>C++

Fornisce informazioni per la classe C++ creata per l'oggetto.

- **Nome breve**

   Imposta il nome radice per l'oggetto. Il nome specificato determina i nomi di `Class` e **CoClass** , i nomi di **File con estensione cpp** e **File con estensione h** , il nome di **Interfaccia** , i nomi di **Tipo** e il valore di **ProgID** , a meno che questi campi non vengano modificati singolarmente.

- **File con estensione h**

   Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome specificato in **Nome breve** . Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato o aggiungere la dichiarazione di classe a un file esistente. Se si seleziona un file esistente, la procedura guidata non lo salverà nel percorso selezionato finché non si sceglie **Fine** .

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine** , la procedura guidata chiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **Classe**

   Imposta il nome della classe da creare. Questo nome è basato sul nome specificato in **Nome breve** , preceduto da "C", il prefisso tipico per un nome di classe.

- **File con estensione cpp**

   Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome specificato in **Nome breve** . Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **Fine** nella procedura guidata.

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine** , la procedura guidata chiede di specificare se l'implementazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **Con attributi**

   Indica se l'oggetto usa attributi. Se si aggiunge un oggetto a un progetto ATL con attributi, questa opzione è selezionata e non può essere modificata. Questo significa che è possibile aggiungere oggetti con attributi solo a un progetto creato con supporto per gli attributi.

   Se si seleziona questa opzione per un progetto ATL che non include il supporto per gli attributi, la procedura guidata chiede di specificare se si vuole aggiungere il supporto per gli attributi al progetto.

   Per i progetti senza attributi, per impostazione predefinita qualsiasi oggetto aggiunto dopo aver impostato questa opzione viene designato come con attributi (la casella di controllo è selezionata). È possibile deselezionare questa casella per aggiungere un oggetto che non usa attributi.

   Per ulteriori informazioni [, vedere Impostazioni applicazione, creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [meccanismi di base degli attributi](../../windows/attributes/cpp-attributes-com-net.md#basic-mechanics-of-attributes) .

### <a name="com"></a>COM

Fornisce informazioni sulla funzionalità COM per l'oggetto.

- **Coclasse**

   Imposta il nome della classe del componente che contiene un elenco delle interfacce supportate dall'oggetto. Se il progetto o questo oggetto usa attributi, non è possibile modificare questa opzione, perché ATL non include l'attributo **CoClass** .

- **Tipo**

   Imposta la descrizione dell'oggetto che verrà visualizzata nel Registro di sistema per la coclasse.

- **Interfaccia**

   Imposta l'interfaccia creata per l'oggetto. Questa interfaccia contiene i metodi personalizzati.

- **ProgID**

   Imposta il nome che può essere usato dai contenitori invece del CLSID dell'oggetto.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Componente pagine ASP ATL](../../atl/reference/adding-an-atl-active-server-page-component.md)
