---
title: Creazione guidata componente ASP ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.asp.overview
dev_langs:
- C++
helpviewer_keywords:
- ASP components, creating in ATL
- ATL Active Server Page Component Wizard
ms.assetid: 5a5cb904-dbbf-44ea-ad3d-2ddd14c1d3c5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8a87b2ba1e846ce995a987379ae6f30567a39773
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50053812"
---
# <a name="atl-active-server-page-component-wizard"></a>Creazione guidata componente ASP ATL

Questa procedura guidata consente di inserire nel progetto di componente pagine ASP (Active Server). Microsoft Internet Information Services (IIS) usa i componenti ASP come parte della relativa architettura di sviluppo avanzato pagina Web.

Usando questa procedura guidata, è possibile specificare che il componente del modello di threading e il supporto di aggregazione. È inoltre possibile indicare il supporto per l'interfaccia di informazioni di errore, i punti di connessione e marshalling a thread libero.

> [!WARNING]
> In Visual Studio 2017 versione 15.9 questa procedura guidata del codice è deprecata e verrà rimossa in una versione futura di Visual Studio. Questa procedura guidata viene usata raramente. Il supporto generale per ATL e MFC non subisce attualmente l'effetto della rimozione di questa procedura guidata. Se vuoi condividere i tuoi commenti e suggerimenti su questa deprecazione, compila il [presente sondaggio](https://www.surveymonkey.com/r/QDWKKCN). I tuoi commenti e suggerimenti sono importanti per noi.

## <a name="remarks"></a>Note

A partire da Visual Studio 2008, lo script di registrazione prodotto da questa procedura guidata registrerà i componenti COM sotto **HKEY_CURRENT_USER** invece di **HKEY_LOCAL_MACHINE**. Per modificare questo comportamento, impostare il **Registra componente per tutti gli utenti** opzione della procedura guidata.

## <a name="names"></a>Nomi

Specificare i nomi per l'oggetto dell'interfaccia e le classi da aggiungere al progetto. Ad eccezione di **nome breve**, tutte le altre caselle possono essere modificati indipendentemente dagli altri. Se si modifica il testo per **nome breve**, la modifica viene riflessa nei nomi di tutte le altre caselle in questa pagina.

Se si modifica il **coclasse** nome nella sezione COM, la modifica viene riflessa nel **tipo** e **ProgID** caselle, ma il **interfaccia** nome non viene modificato. Questo comportamento di denominazione è progettato per rendere facilmente identificabile tutti i nomi per l'utente quando si sviluppa il controllo.

### <a name="c"></a>C++

Vengono fornite informazioni per la classe C++ creata per l'oggetto.

- **Nome breve**

   Imposta il nome radice per l'oggetto. Il nome specificato determina la `Class` e **Coclass** nomi, il **file con estensione cpp** e **file con estensione h** nomi, il **interfaccia**nome, il **tipo** nomi e il **ProgID**, a meno che non vengano modificati singolarmente questi campi.

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

   Se si seleziona questa opzione per un progetto ATL non ha attributo supporto, la procedura guidata chiederà di specificare se si desidera aggiungere il supporto di attributo per il progetto.

   Per impostazione predefinita per i progetti senza attributi, tutti gli oggetti aggiunti dopo aver impostato questa opzione vengono designati come oggetto con attributi (la casella di controllo è selezionata). È possibile deselezionare questa casella per aggiungere un oggetto che non usa gli attributi.

   Visualizzare [le impostazioni dell'applicazione, creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [meccanismi di base degli attributi](../../windows/basic-mechanics-of-attributes.md) per altre informazioni.

### <a name="com"></a>COM

Fornisce informazioni sulle funzionalità COM per l'oggetto.

- **Coclasse**

   Imposta il nome della classe del componente che contiene un elenco delle interfacce supportate dall'oggetto. Se il progetto oppure questo oggetto utilizza gli attributi, è possibile modificare questa opzione perché ATL non include il **coclasse** attributo.

- **Type**

   Imposta la descrizione dell'oggetto che verrà visualizzato nel Registro di sistema per la coclasse.

- **Interface**

   Imposta l'interfaccia creata per l'oggetto. Questa interfaccia contiene i metodi personalizzati.

- **ProgID**

   Imposta il nome che i contenitori possano usare invece il CLSID dell'oggetto.

## <a name="see-also"></a>Vedere anche

[Componente pagine ASP ATL](../../atl/reference/adding-an-atl-active-server-page-component.md)
