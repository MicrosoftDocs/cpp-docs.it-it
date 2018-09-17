---
title: Creazione guidata oggetto semplice ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.simple.overview
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, adding objects
- ATL Simple Object Wizard
ms.assetid: f7f85741-9aad-4543-a917-a29b996364da
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 871e27b4a28299e6a3c96f7249f4636f412001d8
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45723619"
---
# <a name="atl-simple-object-wizard"></a>Creazione guidata oggetto semplice ATL

Questa procedura guidata consente di inserire nel progetto un oggetto COM minimo. Utilizzare questa pagina della procedura guidata per specificare i nomi che identificano i file per l'oggetto e le relative funzionalità COM e una classe C++.

Usare la [opzioni](../../atl/reference/options-atl-simple-object-wizard.md) supportano pagina della procedura guidata consente di specificare il modello di threading, le aggregazioni e se supporta le interfacce duali e automazione. È inoltre possibile indicare il supporto per l'interfaccia di informazioni sugli errori, punti di connessione, il supporto di Internet Explorer e marshalling a thread libero.

## <a name="remarks"></a>Note

A partire da Visual Studio 2008, lo script di registrazione prodotto da questa procedura guidata registrerà i componenti COM sotto **HKEY_CURRENT_USER** invece di **HKEY_LOCAL_MACHINE**. Per modificare questo comportamento, impostare il **Registra componente per tutti gli utenti** opzione della procedura guidata.

## <a name="names"></a>Nomi

Specificare i nomi per l'oggetto dell'interfaccia e le classi da aggiungere al progetto. Ad eccezione di **nome breve**, tutte le altre caselle possono essere modificati indipendentemente dagli altri. Se si modifica il testo per **nome breve**, la modifica viene riflessa nei nomi di tutte le altre caselle in questa pagina. Se si modifica il **coclasse** nome nella sezione COM, la modifica viene riflessa nel **tipo** e **ProgID** caselle, ma il **interfaccia** nome non viene modificato. Questo comportamento di denominazione è progettato per rendere facilmente identificabile tutti i nomi per l'utente quando si sviluppa il controllo.

> [!NOTE]
>  **Coclasse** è modificabile solo nei progetti. Se il progetto con attributi, non è possibile modificare **coclasse**.

## <a name="c"></a>C++

Vengono fornite informazioni per la classe C++ creata per l'oggetto.

- **Nome breve**

   Imposta il nome abbreviato per l'oggetto. Il nome specificato determina la `Class` e `Coclass` nomi, il **file con estensione cpp** e **file con estensione h** nomi, il **interfaccia** assegnare un nome, il **Tipo** nomi e il **ProgID**, a meno che non vengano modificati singolarmente questi campi.

- **File con estensione h**

   Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome fornito nel **nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato o aggiungere la dichiarazione di classe a un file esistente. Se si seleziona un file esistente, il non verrà salvato nel percorso selezionato finché non si fare clic su **fine** nella procedura guidata.

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **Classe**

   Imposta il nome della classe da creare. Questo nome è basato sul nome fornito nel **nome breve**, preceduto da "C", il prefisso standard per un nome di classe.

- **File con estensione cpp**

   Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome fornito nel **nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **Fine** nella procedura guidata.

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se l'implementazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **Con attributi**

   Indica se l'oggetto utilizza gli attributi. Se si aggiunge un oggetto a un progetto ATL con attributo, questa opzione è selezionata e non può essere modificata. Vale a dire, è possibile aggiungere solo gli oggetti con attributi a un progetto creato con il supporto di attributo.

   È possibile aggiungere un oggetto con attributo solo a un progetto ATL che utilizza attributi. Se si seleziona questa opzione per un progetto ATL non ha attributo supporto, la procedura guidata chiederà di specificare se si desidera aggiungere il supporto di attributo per il progetto.

   Per impostazione predefinita, tutti gli oggetti aggiunti dopo aver impostato questa opzione vengono designati come oggetto con attributi (la casella di controllo è selezionata). È possibile deselezionare questa casella per aggiungere un oggetto che non usa gli attributi.

   Visualizzare [le impostazioni dell'applicazione, creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [meccanismi di base degli attributi](../../windows/basic-mechanics-of-attributes.md) per altre informazioni.

## <a name="com"></a>COM

Fornisce informazioni sulle funzionalità COM per l'oggetto.

- **Coclasse**

   Imposta il nome della classe del componente che contiene un elenco delle interfacce supportate dall'oggetto.

   > [!NOTE]
   > Se si crea il progetto mediante attributi oppure se questa pagina della procedura guidata si indica che l'oggetto utilizza gli attributi, è possibile modificare questa opzione perché ATL non include il `coclass` attributo.

- **Type**

   Imposta la descrizione dell'oggetto che verrà visualizzato nel Registro di sistema

- **Interface**

   Imposta l'interfaccia creata per l'oggetto. Questa interfaccia contiene i metodi personalizzati.

- **ProgID**

   Imposta il nome che i contenitori possano usare invece il CLSID dell'oggetto.

## <a name="see-also"></a>Vedere anche

[Oggetto semplice ATL](../../atl/reference/adding-an-atl-simple-object.md)

