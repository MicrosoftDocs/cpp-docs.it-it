---
title: Creazione guidata 1.0 componente ATL COM+ | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.mts.overview
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, adding components
- ATL COM+ 1.0 Component Wizard
ms.assetid: 11670681-8671-4122-96a4-2e52f8dadce0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 19151ca659f7bc3235f84eefb39b640c4856fa43
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32361303"
---
# <a name="atl-com-10-component-wizard"></a>Creazione guidata componente ATL COM+ 1.0
Utilizzare questa procedura guidata per aggiungere un oggetto per il progetto che supporta i servizi COM+ 1.0, incluse le transazioni.  
  
 È possibile specificare se l'oggetto supporta le interfacce duali e automazione. È inoltre possibile indicare il supporto per l'interfaccia informazioni degli errori, controllo di oggetti avanzato, transazioni e accodamento asincrono.  
  
## <a name="remarks"></a>Note  
 A partire da Visual Studio 2008, lo script di registrazione prodotto da questa procedura guidata registrerà i componenti COM in **HKEY_CURRENT_USER** anziché **HKEY_LOCAL_MACHINE**. Per modificare questo comportamento, impostare il **Registra componente per tutti gli utenti** opzione della procedura guidata ATL.  
  
## <a name="names"></a>Nomi  
 Specificare i nomi per le classi da aggiungere al progetto, l'interfaccia e l'oggetto. Ad eccezione di **nome breve**, tutte le altre caselle possono essere modificati indipendentemente dalle altre. Se si modifica il testo per **nome breve**, la modifica viene riflessa nei nomi di tutte le altre caselle in questa pagina. Se si modifica il **coclasse** nome nella sezione COM, la modifica viene riflessa nel **tipo** e **ProgID** caselle, ma la **interfaccia** nome non modificare. Questo comportamento di denominazione è progettato per rendere facilmente identificabile tutti i nomi per l'utente quando si sviluppa il controllo.  
  
 **Nome breve**  
 Imposta il nome abbreviato per l'oggetto. Il nome fornito determina la `Class` e `Coclass` nomi, il **file con estensione cpp** e **file con estensione h** nomi, il **interfaccia** nome, il **Tipo** nomi e **ProgID**, a meno che non vengano modificati singolarmente tali campi.  
  
 **file con estensione h**  
 Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è in base al nome fornito nel **nome breve**. Fare clic sul pulsante con puntini di sospensione per salvare il nome del file nel percorso prescelto o per aggiungere la dichiarazione di classe in un file esistente. Se si sceglie un file esistente, il non verrà salvato nel percorso selezionato finché non si sceglie **fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic **fine**, la procedura guidata viene richiesto di indicare se la dichiarazione di classe deve essere aggiunti al contenuto del file. Fare clic su **Sì** da aggiungere al file; fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
 **Classe**  
 Imposta il nome della classe da creare. Questo nome è in base al nome fornito in **nome breve**, preceduto da "C", il prefisso standard per un nome di classe.  
  
 **file con estensione cpp**  
 Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è in base al nome fornito in **nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic **fine**, la procedura guidata viene richiesto di indicare se l'implementazione della classe deve essere aggiunti al contenuto del file. Fare clic su **Sì** da aggiungere al file; fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
 **Con attributi**  
 Indica se l'oggetto utilizza gli attributi. Se si aggiunge un oggetto a un progetto ATL con attributo, questa opzione è selezionata e non può essere modificata. Ovvero, è possibile aggiungere solo oggetti con attributi a un progetto creato con il supporto di attributo.  
  
 Se si seleziona questa opzione per un progetto ATL che non ha attributo supporto, la procedura guidata viene richiesto di specificare se si desidera aggiungere il supporto di attributo per il progetto.  
  
 Tutti gli oggetti che aggiungere il seguente impostazione di questa opzione vengono designati come attributi per impostazione predefinita (la casella di controllo è selezionata). È possibile deselezionare questa casella per aggiungere un oggetto che non utilizza gli attributi.  
  
 Vedere [le impostazioni dell'applicazione, creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [meccanismi fondamentali degli attributi](../../windows/basic-mechanics-of-attributes.md) per ulteriori informazioni.  
  
### <a name="com"></a>COM  
 Fornisce informazioni sulle funzionalità COM per l'oggetto.  
  
 **coclasse**  
 Imposta il nome della classe del componente che contiene un elenco delle interfacce supportate dall'oggetto.  
  
> [!NOTE]
>  Se si crea il progetto utilizzando gli attributi, o se in questa pagina della procedura guidata si indica che il componente COM+ 1.0 utilizza gli attributi, è possibile modificare questa opzione perché ATL non include il `coclass` attributo.  
  
 **Type**  
 Imposta la descrizione dell'oggetto che verrà visualizzato nel Registro di sistema  
  
 **Interface**  
 Imposta l'interfaccia creata per l'oggetto. Questa interfaccia contiene i metodi personalizzati.  
  
 **ProgID**  
 Imposta il nome che è possono utilizzare contenitori anziché il CLSID dell'oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Componente ATL COM+ 1.0](../../atl/reference/adding-an-atl-com-plus-1-0-component.md)

