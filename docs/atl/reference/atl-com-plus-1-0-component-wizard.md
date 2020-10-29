---
title: Creazione guidata componente ATL COM+ 1.0
ms.date: 05/08/2019
helpviewer_keywords:
- ATL projects, adding components
ms.assetid: 11670681-8671-4122-96a4-2e52f8dadce0
ms.openlocfilehash: c4e77c7f3c17a90ddd09661b5fea5bad984d3245
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92923809"
---
# <a name="atl-com-10-component-wizard"></a>Creazione guidata componente ATL COM+ 1.0

::: moniker range="msvc-160"

Questa procedura guidata non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=msvc-150"

Usare questa procedura guidata per aggiungere al progetto un oggetto che supporta i servizi COM+ 1.0, incluse le transazioni.

È possibile specificare se l'oggetto supporta le interfacce duali e l'automazione. È anche possibile indicare il supporto per l'interfaccia delle informazioni sugli errori, il controllo di oggetti avanzato, le transazioni e l'accodamento asincrono di messaggi.

## <a name="remarks"></a>Osservazioni

A partire da Visual Studio 2008, lo script di registrazione prodotto da questa procedura guidata registra i componenti COM in **HKEY_CURRENT_USER** invece che in **HKEY_LOCAL_MACHINE** . Per modificare questo comportamento, impostare l'opzione **Registra componente per tutti gli utenti** della procedura guidata.

## <a name="names"></a>Nomi

Specificare i nomi per l'oggetto, l'interfaccia e le classi da aggiungere al progetto. Ad eccezione di **Nome breve** , tutte le altre caselle possono essere modificate indipendentemente dalle altre. Se si modifica il testo per **Nome breve** , la modifica viene applicata ai nomi di tutte le altre caselle in questa pagina. Se si modifica il nome di **CoClass** nella sezione COM, la modifica viene applicata alle caselle **Tipo** e **ProgID** , ma il nome di **Interfaccia** non viene modificato. Questo comportamento di denominazione è progettato per rendere tutti i nomi facilmente identificabili durante lo sviluppo del controllo.

- **Nome breve**

   Imposta il nome abbreviato per l'oggetto. Il nome specificato determina i nomi di `Class` e `Coclass`, i nomi di **File con estensione cpp** e **File con estensione h** , il nome di **Interfaccia** , i nomi di **Tipo** e il valore di **ProgID** , a meno che questi campi non vengano modificati singolarmente.

- **File con estensione h**

   Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome specificato in **Nome breve** . Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato o aggiungere la dichiarazione di classe a un file esistente. Se si sceglie un file esistente, la procedura guidata non lo salverà nel percorso selezionato finché non si sceglie **Fine** .

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine** , la procedura guidata chiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **Classe**

   Imposta il nome della classe da creare. Questo nome è basato sul nome specificato in **Nome breve** , preceduto da "C", il prefisso tipico per un nome di classe.

- **File con estensione cpp**

   Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome specificato in **Nome breve** . Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **Fine** nella procedura guidata.

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine** , la procedura guidata chiede di specificare se l'implementazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **Con attributi**

   Indica se l'oggetto usa attributi. Se si aggiunge un oggetto a un progetto ATL con attributi, questa opzione è selezionata e non può essere modificata. Questo significa che è possibile aggiungere oggetti con attributi solo a un progetto creato con supporto per gli attributi.

   Se si seleziona questa opzione per un progetto ATL che non include il supporto per gli attributi, la procedura guidata chiede di specificare se si vuole aggiungere il supporto per gli attributi al progetto.

   Per impostazione predefinita, qualsiasi oggetto aggiunto dopo aver impostato questa opzione viene designato come con attributi (la casella di controllo è selezionata). È possibile deselezionare questa casella per aggiungere un oggetto che non usa attributi.

   Per ulteriori informazioni [, vedere Impostazioni applicazione, creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [meccanismi di base degli attributi](../../windows/attributes/cpp-attributes-com-net.md#basic-mechanics-of-attributes) .

### <a name="com"></a>COM

Fornisce informazioni sulla funzionalità COM per l'oggetto.

- **Coclasse**

   Imposta il nome della classe del componente che contiene un elenco delle interfacce supportate dall'oggetto.

> [!NOTE]
> Se si crea il progetto mediante attributi o se in questa pagina della procedura guidata si indica che il componente COM+ 1.0 usa attributi, non è possibile modificare questa opzione perché ATL non include l'attributo `coclass`.

- **Tipo**

   Imposta la descrizione dell'oggetto che verrà visualizzata nel Registro di sistema.

- **Interfaccia**

   Imposta l'interfaccia creata per l'oggetto. Questa interfaccia contiene i metodi personalizzati.

- **ProgID**

   Imposta il nome che può essere usato dai contenitori invece del CLSID dell'oggetto.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Componente ATL COM+ 1.0](../../atl/reference/adding-an-atl-com-plus-1-0-component.md)
