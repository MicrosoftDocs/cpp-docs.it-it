---
title: "Classe type_info | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "type_info"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "class type_info"
  - "type_info (classe)"
ms.assetid: 894ddda2-7de4-4da3-9404-d2c74e356c16
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe type_info
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe **type\_info** descrive le informazioni sul tipo generate all'interno del programma dal compilatore.  Gli oggetti di questa classe consentono di archiviare un puntatore a un nome per il tipo.  La classe **type\_info** consente inoltre di archiviare un valore codificato adatto per il confronto di due tipi per stabilirne l'uguaglianza o l'ordinamento.  Le regole di codifica e la sequenza di ordinamento per i tipi non sono specificate e possono variare in base al programma.  
  
 Per utilizzare la classe **type\_info** è necessario includere il file di intestazione \<`typeinfo>`.  L'interfaccia della classe **type\_info** è:  
  
```  
class type_info {  
public:  
    virtual ~type_info();  
    size_t hash_code() const  
    _CRTIMP_PURE bool operator==(const type_info& rhs) const;  
    _CRTIMP_PURE bool operator!=(const type_info& rhs) const;  
    _CRTIMP_PURE int before(const type_info& rhs) const;  
    _CRTIMP_PURE const char* name() const;  
    _CRTIMP_PURE const char* raw_name() const;  
};  
```  
  
 Non è possibile creare direttamente un'istanza degli oggetti della classe **type\_info**, poiché la classe dispone di un solo costruttore di copia privato.  L'unico modo per costruire un oggetto **type\_info** \(temporaneo\) consiste nell'utilizzo dell'operatore [typeid](../cpp/typeid-operator.md).  Poiché anche l'operatore di assegnazione è privato, non è possibile copiare o assegnare gli oggetti della classe **type\_info**.  
  
 **type\_info::hash\_code** definisce una funzione hash che consente di eseguire il mapping dei valori di tipo **typeinfo** a una distribuzione di valori di indice.  
  
 Gli operatori `==` e `!=` possono essere utilizzati per eseguire il confronto con altri oggetti **type\_info** per verificarne rispettivamente l'uguaglianza e la disuguaglianza.  
  
 Non esiste alcun collegamento tra l'ordinamento dei tipi e le relazioni di ereditarietà.  Utilizzare la funzione membro **type\_info::before** per determinare la sequenza di ordinamento dei tipi.  Non esiste alcuna garanzia che **type\_info::before** produca lo stesso risultato in programmi differenti o addirittura nelle diverse esecuzioni dello stesso programma.  **type\_info::before** è quindi simile all'operatore address\-of **\(&\)**.  
  
 La funzione membro **type\_info::name** restituisce **const char\*** a una stringa a terminazione null che rappresenta il nome leggibile del tipo.  La memoria a cui si fa riferimento viene memorizzata nella cache e non deve essere mai direttamente deallocata.  
  
 La funzione membro **type\_info::raw\_name** restituisce **const char\*** a una stringa a terminazione null che rappresenta il nome decorato del tipo di oggetto.  Il nome viene archiviato nel formato decorato per risparmiare spazio.  Questa funzione è pertanto più veloce di **type\_info::name** perché non deve rimuovere la decorazione del nome.  La stringa restituita dalla funzione **type\_info::raw\_name** è utile nelle operazioni di confronto, ma non è leggibile.  Se è necessaria una stringa leggibile, utilizzare invece la funzione **type\_info::name**.  
  
 Le informazioni sui tipi vengono generate per le classi polimorfiche solo se viene specificata l'opzione del compilatore [\/GR \(Abilita informazioni sui tipi in fase di esecuzione\)](../build/reference/gr-enable-run-time-type-information.md).  
  
## Vedere anche  
 [Informazioni sui tipi di runtime](../cpp/run-time-type-information.md)