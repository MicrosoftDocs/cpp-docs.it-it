---
title: "Classe result_of | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "result_of"
  - "std.result_of"
  - "std::result_of"
  - "type_traits/std::result_of"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "result_of"
ms.assetid: 5374a096-4b4a-4712-aa97-6852c5cdd6be
caps.latest.revision: 13
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe result_of
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Determina il tipo restituito di tipo richiamabile che accetta i tipi di argomenti specificati.  
  
## Sintassi  
  
```  
template <class Fn, class... ArgTypes>  
    struct result_of<Fn(ArgTypes...)>;  
```  
  
#### Parametri  
 `Fn`  
 Tipo richiamabile alla query.  
  
 `ArgTypes`  
 I tipi di elenco di argomenti di tipo richiamabile alla query.  
  
## Note  
 Utilizzare questo modello per determinare in fase di compilazione il tipo di risultato di `Fn`\(`ArgTypes`\), dove `Fn` è un tipo richiamabile richiamato con un elenco di argomenti dei tipi in `ArgTypes`. Il `type` il tipo di risultato i nomi dei membri della classe modello `decltype(INVOKE(declval<Fn>(), declval<ArgTypes>()...))` Se l'espressione non valutata `INVOKE(declval<Fn>(), declval<ArgTypes>()...)` ben formato. In caso contrario, la classe di modello non dispone di alcun membro `type`. Il tipo `Fn` e tutti i tipi nel pacchetto di parametro `ArgTypes` deve essere di tipi completi, `void`, o matrici di associazione sconosciuto.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)