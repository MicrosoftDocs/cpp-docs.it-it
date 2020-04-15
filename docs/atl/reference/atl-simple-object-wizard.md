---
title: Creazione guidata oggetto semplice ATL
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.class.atl.simple.overview
helpviewer_keywords:
- ATL projects, adding objects
- ATL Simple Object Wizard
ms.assetid: f7f85741-9aad-4543-a917-a29b996364da
ms.openlocfilehash: bd4c9eede16ed086020dd8f12d90876e50a0a341
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319210"
---
# <a name="atl-simple-object-wizard"></a>Creazione guidata oggetto semplice ATL

Questa procedura guidata consente di inserire nel progetto un oggetto COM minimo. Utilizzare questa pagina della procedura guidata per specificare i nomi che identificano la classe e i file di C, per l'oggetto e le relative funzionalità COM.

Utilizzare la pagina [Opzioni](../../atl/reference/options-atl-simple-object-wizard.md) di questa procedura guidata per specificare il modello di threading dell'oggetto, il relativo supporto di aggregazione e se supporta le interfacce duali e l'automazione. È inoltre possibile indicare il supporto per l'interfaccia delle informazioni sugli errori, i punti di connessione, il supporto di Internet Explorer e il marshalling a thread libero.

## <a name="remarks"></a>Osservazioni

A partire da Visual Studio 2008, lo script di registrazione prodotto da questa procedura guidata registra i componenti COM in **HKEY_CURRENT_USER** invece che in **HKEY_LOCAL_MACHINE**. Per modificare questo comportamento, impostare l'opzione **Registra componente per tutti gli utenti** della procedura guidata.

## <a name="names"></a>nomi

Specificare i nomi per l'oggetto, l'interfaccia e le classi da aggiungere al progetto. Ad eccezione di **Nome breve**, tutte le altre caselle possono essere modificate indipendentemente dalle altre. Se si modifica il testo per **Nome breve**, la modifica viene applicata ai nomi di tutte le altre caselle in questa pagina. Se si modifica il nome di **CoClass** nella sezione COM, la modifica viene applicata alle caselle **Tipo** e **ProgID**, ma il nome di **Interfaccia** non viene modificato. Questo comportamento di denominazione è progettato per rendere tutti i nomi facilmente identificabili durante lo sviluppo del controllo.

> [!NOTE]
> **CoClass** è modificabile solo in progetti senza attributi. Se il progetto è con attributi, non è possibile modificare **CoClass**.

## <a name="c"></a>C++

Fornisce informazioni per la classe C++ creata per l'oggetto.

- **Nome breve**

   Imposta il nome abbreviato per l'oggetto. Il nome specificato determina i nomi di `Class` e `Coclass`, i nomi di **File con estensione cpp** e **File con estensione h**, il nome di **Interfaccia**, i nomi di **Tipo** e il valore di **ProgID**, a meno che questi campi non vengano modificati singolarmente.

- **File con estensione h**

   Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome specificato in **Nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato o aggiungere la dichiarazione di classe a un file esistente. Se si seleziona un file esistente, la procedura guidata non lo salverà nel percorso selezionato finché non si sceglie **Fine**.

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **Class**

   Imposta il nome della classe da creare. Questo nome è basato sul nome specificato in **Nome breve**, preceduto da "C", il prefisso tipico per un nome di classe.

- **File con estensione cpp**

   Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome specificato in **Nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **Fine** nella procedura guidata.

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se l'implementazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **Con attributi**

   Indica se l'oggetto usa attributi. Se si aggiunge un oggetto a un progetto ATL con attributi, questa opzione è selezionata e non può essere modificata. Questo significa che è possibile aggiungere oggetti con attributi solo a un progetto creato con supporto per gli attributi.

   È possibile aggiungere un oggetto con attributi solo a un progetto ATL che usa attributi. Se si seleziona questa opzione per un progetto ATL che non include il supporto per gli attributi, la procedura guidata chiede di specificare se si vuole aggiungere il supporto per gli attributi al progetto.

   Per impostazione predefinita, qualsiasi oggetto aggiunto dopo aver impostato questa opzione viene designato come con attributi (la casella di controllo è selezionata). È possibile deselezionare questa casella per aggiungere un oggetto che non usa attributi.

   Per altre informazioni, vedere [Impostazioni applicazione, Creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [Meccanismi di base degli attributi](../../windows/basic-mechanics-of-attributes.md).

## <a name="com"></a>COM

Fornisce informazioni sulla funzionalità COM per l'oggetto.

- **CoClass**

   Imposta il nome della classe del componente che contiene un elenco delle interfacce supportate dall'oggetto.

   > [!NOTE]
   > Se si crea il progetto utilizzando gli attributi o se si indica in questa pagina della procedura `coclass` guidata che l'oggetto utilizza gli attributi, non è possibile modificare questa opzione perché ATL non include l'attributo.

- **Tipo**

   Imposta la descrizione dell'oggetto che verrà visualizzata nel Registro di sistema.

- **Interfaccia**

   Imposta l'interfaccia creata per l'oggetto. Questa interfaccia contiene i metodi personalizzati.

- **Progid**

   Imposta il nome che può essere usato dai contenitori invece del CLSID dell'oggetto.

## <a name="see-also"></a>Vedere anche

[Oggetto semplice ATL](../../atl/reference/adding-an-atl-simple-object.md)
