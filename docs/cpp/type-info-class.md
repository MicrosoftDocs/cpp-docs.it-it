---
title: Classe type_info | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- type_info
dev_langs:
- C++
helpviewer_keywords:
- class type_info
- type_info class
ms.assetid: 894ddda2-7de4-4da3-9404-d2c74e356c16
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9cd5a1844bfeec798ee25a3cb8e65efd019e65e9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="typeinfo-class"></a>Classe type_info
Il **type_info** classe descrive le informazioni sul tipo generate all'interno del programma dal compilatore. Gli oggetti di questa classe consentono di archiviare un puntatore a un nome per il tipo. Il **type_info** classe consente archivia anche un valore codificato adatto per il confronto di due tipi per stabilirne l'uguaglianza o l'ordinamento. Le regole di codifica e la sequenza di ordinamento per i tipi non sono specificate e possono variare in base al programma.  
  
 Il `<typeinfo>` file di intestazione deve essere incluso per utilizzare il **type_info** classe. L'interfaccia per il **type_info** classe:  
  
```cpp
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
  
 È possibile creare istanze di oggetti del **type_info** classe direttamente, poiché la classe dispone solo di un costruttore di copia privato. L'unico modo per costruire (temporaneo) **type_info** oggetto consiste nell'utilizzare il [typeid](../cpp/typeid-operator.md) operatore. Poiché l'operatore di assegnazione è privato, non è possibile copiare o assegnare gli oggetti della classe **type_info**.  
  
 **hash_code** definisce una funzione hash per il mapping di valori di tipo **typeinfo** una distribuzione dei valori di indice.  
  
 Gli operatori `==` e `!=` consente di confrontare l'uguaglianza e disuguaglianza con altri **type_info** oggetti, rispettivamente.  
  
 Non esiste alcun collegamento tra l'ordinamento dei tipi e le relazioni di ereditarietà. Utilizzare il **type_info:: before** funzione membro per determinare la sequenza di confronto dei tipi. Non c'è garanzia che **type_info:: before** restituirà lo stesso risultato in programmi differenti o addirittura nelle diverse esecuzioni dello stesso programma. In questo modo, **type_info:: before** è simile all'indirizzo di **(&)** operatore.  
  
 Il **type_info:: Name** funzione membro restituisce un **const char\***  in una stringa con terminazione null che rappresenta il nome leggibile del tipo. La memoria a cui si fa riferimento viene memorizzata nella cache e non deve essere mai direttamente deallocata.  
  
 Il **type_info:: raw_name** funzione membro restituisce un **const char\***  in una stringa con terminazione null che rappresenta il nome decorato del tipo di oggetto. Il nome viene archiviato nel formato decorato per risparmiare spazio. Di conseguenza, questa funzione è più veloce **type_info:: Name** perché non è necessario rimuovere la decorazione di nome. La stringa restituita dal **type_info:: raw_name** funzione è utile nelle operazioni di confronto, ma non è leggibile. Se è necessaria una stringa leggibile, utilizzare il **type_info:: Name** funzione alternativa.  
  
 Informazioni sul tipo viene generati per classi polimorfiche solo se il [/GR (Attiva informazioni sui tipi in fase di esecuzione)](../build/reference/gr-enable-run-time-type-information.md) è specificata l'opzione del compilatore.  
  
## <a name="see-also"></a>Vedere anche  
 [Informazioni sui tipi di runtime](../cpp/run-time-type-information.md)
