---
title: Aggiungere un metodo
ms.date: 11/09/2018
f1_keywords:
- vc.codewiz.method.overview
- vc.codewiz.method.idlattrib
helpviewer_keywords:
- add method wizard [C++]
- methods [C++], adding
- methods [C++], adding using wizards
- IDL attributes, add method wizard
ms.assetid: 4ba4e45f-fa38-4d5e-af44-cbec0a7ab558
ms.openlocfilehash: b0c8ddabc4ed08fd217545bad269f0b2e48dd49e
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69509545"
---
# <a name="add-a-method"></a>Aggiungere un metodo

È possibile usare l'[Aggiunta guidata metodo](#add-method-wizard) per aggiungere un metodo a un'interfaccia del progetto. Se il progetto contiene una classe associata all'interfaccia, la procedura guidata modifica anche la classe.

**Per aggiungere un metodo all'oggetto:**

1. Nella **Visualizzazione classi** espandere il nodo di progetto per visualizzare l'interfaccia a cui si vuole aggiungere il metodo.

   > [!NOTE]
   > È anche possibile aggiungere metodi alle interfacce dispatch che, se il progetto non è attribuito, si trovano sotto il nodo della libreria.

1. Fare clic con il pulsante destro del mouse sul nome dell'interfaccia.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi **Aggiungi metodo**.

1. In Aggiunta guidata metodo specificare le informazioni per creare il metodo.

1. Specificare le impostazioni del linguaggio di definizione dell'interfaccia per il metodo nella pagina [Attributi IDL](#idl-attributes-add-method-wizard) della procedura guidata.

1. Selezionare **Fine** per aggiungere il metodo.

## <a name="in-this-section"></a>Contenuto della sezione

- [Aggiunta guidata metodo](#add-method-wizard)
- [Attributi IDL, Aggiunta guidata metodo](#idl-attributes-add-method-wizard)

## <a name="add-method-wizard"></a>Aggiunta guidata metodo

Usare questa procedura guidata per aggiungere un metodo a un'interfaccia. La procedura guidata visualizza opzioni diverse, a seconda del tipo di progetto o del tipo di interfaccia a cui viene aggiunto un metodo.

### <a name="names"></a>Nomi

- **Tipo restituito**

  Tipo di dati restituito dal metodo. `HRESULT` è consigliato per tutti i tipi di interfaccia poiché offre un modo standard per restituire errori.

  |Tipo interfaccia|DESCRIZIONE|
  |--------------------|-----------------|
  |Interfaccia duale|`HRESULT`. Non modificabile.|
  |Interfaccia personalizzata|`HRESULT`. Non modificabile.|
  |Interfaccia personalizzata locale|Specificare un tipo restituito personalizzato o selezionarlo dall'elenco.|
  |Interfaccia dispatch|Specificare un tipo restituito personalizzato o selezionarlo dall'elenco.|
  |Interfaccia dispatch del controllo ActiveX MFC|Se si implementa un metodo predefinito, il tipo restituito è impostato sul valore appropriato e non può essere modificato. Se si seleziona un metodo dall'elenco **Nome metodo** e si seleziona **Personalizzato** in **Selezionare il tipo di metodo**, selezionare un tipo restituito dall'elenco.|

- **Nome metodo**

  Imposta il nome per il metodo.

  |Tipo interfaccia|DESCRIZIONE|
  |--------------------|-----------------|
  |Interfaccia duale ATL, interfaccia personalizzata e interfaccia personalizzata locale|Specificare il nome del metodo.|
  |Interfaccia dispatch MFC|Specificare il nome del metodo o selezionare un nome di metodo suggerito dall'elenco. Se si seleziona un nome dall'elenco, il valore appropriato viene visualizzato nella casella **Tipo restituito** e non è modificabile.|
  |Interfaccia dispatch del controllo ActiveX MFC|Specificare un metodo oppure selezionare uno dei metodi predefiniti [DoClick](../mfc/reference/colecontrol-class.md#doclick) e [Refresh](../mfc/reference/colecontrol-class.md#refresh). Per altre informazioni, vedere [Controlli ActiveX MFC: aggiunta di metodi predefiniti](../mfc/mfc-activex-controls-adding-stock-methods.md).|

- **Tipo di metodo**

  Disponibile solo per i controlli ActiveX MFC. Se si specifica un nome di metodo nella casella **Nome metodo** anziché selezionare un metodo dall'elenco, questa casella non è disponibile.

  Se si seleziona uno dei metodi dell'elenco **Nome metodo**, selezionare l'implementazione predefinita o un'implementazione personalizzata.

  |Tipo di metodo|DESCRIZIONE|
  |-----------------|-----------------|
  |**Predefinito**|Valore predefinito. Inserisce l'implementazione predefinita del metodo selezionato nell'elenco **Nome metodo**. **Tipo restituito** non può essere modificato se si seleziona **Predefinito**.|
  |**Personalizzato**|Inserisce un'implementazione stub del metodo selezionato nell'elenco **Nome metodo**. Per i tipi di metodo personalizzati, è possibile specificare il tipo restituito o selezionarne uno dall'elenco **Tipo restituito**.|

- **Nome interno**

  Disponibile solo per i metodi personalizzati aggiunti a un'interfaccia dispatch MFC. Imposta il nome usato nella mappa di invio, il file di intestazione (con estensione h) e il file di implementazione (con estensione cpp). Per impostazione predefinita, il nome corrisponde a **Nome metodo**. È possibile modificare il nome del metodo se si usa un'interfaccia dispatch MFC o se si aggiunge un metodo personalizzato a un'interfaccia dispatch del controllo ActiveX MFC.

  |Tipo interfaccia|DESCRIZIONE|
  |--------------------|-----------------|
  |Interfaccia duale ATL, interfaccia personalizzata e interfaccia personalizzata locale|Non disponibile.|
  |Interfaccia dispatch MFC|Impostare il nome del metodo per impostazione predefinita. È possibile modificare il nome interno.|
  |Interfaccia dispatch del controllo ActiveX MFC|È possibile impostare il nome interno solo per i metodi personalizzati. I metodi predefiniti non usano un nome interno.|

- **Attributi dei parametri**

  Imposta attributi aggiuntivi per il parametro specificato in **Nome parametro**.

  |Attributo del parametro|DESCRIZIONE|Combinazioni consentite|
  |-------------------------|-----------------|--------------------------|
  |**In**|Indica che il parametro viene passato dalla routine chiamante alla routine chiamata.|Solo `in`<br /><br /> `in` e `out`|
  |**Out**|Indica che il parametro del puntatore viene restituito dalla routine chiamata alla routine chiamante (dal server al client).|Solo `out`<br /><br /> `in` e `out`<br /><br /> `out` e `retval`|
  |**Retval**|Indica che il parametro riceve il valore restituito del membro.|`retval` e `out`|

- **Tipo parametro**

  Imposta il tipo di dati del parametro. Selezionare il tipo dall'elenco.

- **Nome parametro**

  Imposta il nome di un parametro da passare al metodo. Dopo aver digitato il nome, selezionare **Aggiungi** per aggiungerlo all'elenco dei parametri che verranno passati attraverso il metodo. Se non si specifica un nome di parametro, la procedura guidata ignora gli attributi dei parametri (solo ATL) o le selezioni di **Tipo parametro**.

  Dopo aver selezionato **Aggiungi**, il nome del parametro viene visualizzato nell'**Elenco parametri**.

  > [!NOTE]
  > Se si specifica un nome di parametro e quindi si seleziona **Fine** prima di selezionare **Aggiungi**, il parametro non viene aggiunto al metodo. È necessario trovare il metodo e inserire il parametro manualmente.

- **Aggiungi**

  Aggiunge il parametro specificato in **Nome parametro** e il tipo e gli attributi dei parametri all'**Elenco parametri**. Selezionare **Aggiungi** per aggiungere un parametro all'elenco.

- **Rimuovi**

  Rimuove il parametro selezionato nell'**Elenco parametri** dall'elenco.

- **Elenco parametri**

  Visualizza tutti i parametri e i relativi modificatori e tipi aggiunti per il metodo. Quando si aggiungono i parametri, la procedura guidata aggiorna l'**Elenco parametri** in modo da visualizzare ogni parametro con il relativo modificatore e tipo.

## <a name="idl-attributes-add-method-wizard"></a>Attributi IDL, Aggiunta guidata metodo

Usare questa pagina dell'Aggiunta guidata metodo per specificare le impostazioni del linguaggio di definizione dell'interfaccia (IDL) per il metodo.

- `id`

  Imposta l'ID numerico che identifica il metodo. Per altre informazioni, vedere [id](/windows/win32/Midl/id) in *MIDL Reference* (Riferimento MIDL).

  Questa casella non è disponibile per le interfacce personalizzate e per le interfacce dispatch MFC.

- `call_as`

  Specifica il nome di un metodo remoto a cui è possibile associare il metodo locale. Per altre informazioni, vedere [call_as](/windows/win32/Midl/call-as) in *MIDL Reference* (Riferimento MIDL).

  Non disponibile per le interfacce dispatch MFC.

- `helpcontext`

  Specifica un ID contesto che consente all'utente di visualizzare informazioni sul metodo nel file della Guida. Per altre informazioni, vedere [helpcontext](/windows/win32/Midl/helpcontext) in *MIDL Reference* (Riferimento MIDL).

  Non disponibile per le interfacce dispatch MFC.

- `helpstring`

  Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata. Per impostazione predefinita è impostata su "method *Nome metodo*". Per altre informazioni, vedere [helpstring](/windows/win32/Midl/helpstring) in *MIDL Reference* (Riferimento MIDL).

  Non disponibile per le interfacce dispatch MFC.

- **Attributi aggiuntivi**

  Non disponibile per le interfacce dispatch MFC.

  |Attributo|DESCRIZIONE|
  |---------------|-----------------|
  |`hidden`|Indica che il metodo esiste ma non deve essere visualizzato in un visualizzatore per utenti. Per altre informazioni, vedere [hidden](/windows/win32/Midl/hidden) in *MIDL Reference* (Riferimento MIDL).|
  |`source`|Indica che un membro del metodo è un'origine di eventi. Per altre informazioni, vedere [source](/windows/win32/Midl/source) in *MIDL Reference* (Riferimento MIDL).|
  |`local`|Specifica al compilatore MIDL che il metodo non è remoto. Per altre informazioni, vedere [local](/windows/win32/Midl/local) in *MIDL Reference* (Riferimento MIDL).|
  |`restricted`|Specifica che il metodo non può essere chiamato in modo arbitrario. Per altre informazioni, vedere [restricted](/windows/win32/Midl/restricted) in *MIDL Reference* (Riferimento MIDL).|
  |`vararg`|Specifica che il metodo accetta un numero variabile di argomenti. Per ottenere questo risultato, l'ultimo argomento deve essere una matrice protetta di tipo `VARIANT` che contiene tutti gli argomenti rimanenti. Per altre informazioni, vedere [vararg](/windows/win32/Midl/vararg) in *MIDL Reference* (Riferimento MIDL).|
