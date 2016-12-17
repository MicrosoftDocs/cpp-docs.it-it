---
title: "vtordisp | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.vtordisp"
  - "vtordisp_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "pragma, vtordisp"
  - "pragma vtordisp"
ms.assetid: 05b7d73c-43fa-4b62-8c8a-170a9e427391
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# vtordisp
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Controlla l'aggiunta del membro di spostamento di costruzione o distruzione nascosto vtordisp.  
  
## Sintassi  
  
```cpp  
#pragma vtordisp([push,] n)  
#pragma vtordisp(pop)  
#pragma vtordisp()  
#pragma vtordisp([push,] {on | off})  
```  
  
#### Parametri  
 `push`  
 Inserisce l'impostazione corrente di vtordisp nello stack interno del compilatore e specifica la nuova impostazione di vtordisp su `n`.  Se `n` non viene specificato, l'impostazione corrente di vtordisp non viene modificata.  
  
 `pop`  
 Rimuove il primo record dallo stack interno del compilatore e ripristina l'impostazione di vtordisp su valore rimosso.  
  
 `n`  
 Specifica il nuovo valore per l'impostazione di vtordisp.  I valori possibili sono 0, 1 o 2, corrispondenti alle opzioni del compilatore \/vd0, \/vd1 e \/vd2.  Per ulteriori informazioni, vedere [\/vd \(Disabilita spostamenti costruttori\)](../build/reference/vd-disable-construction-displacements.md).  
  
 `on`  
 Equivalente a `#pragma vtordisp(1)`.  
  
 `off`  
 Equivalente a `#pragma vtordisp(0)`.  
  
## Note  
 Il pragma `vtordisp` è applicabile il solo codice che utilizza basi virtuali.  Se una classe derivata esegue l'override di una funzione virtuale che eredita da una classe base virtuale e se un costruttore o un distruttore per la classe derivata chiama tale funzione utilizzando un puntatore alla classe base virtuale, il compilatore potrebbe introdurre campi nascosti `vtordisp` aggiuntivi nelle classi con basi virtuali.  
  
 Il pragma `vtordisp` influisce sul layout delle classi che lo seguono.  Le opzioni \/vd0, \/vd1 e \/vd2 specificano lo stesso comportamento per moduli completi.  Se si specifica `0` oppure `off`, i membri nascosti `vtordisp` vengono eliminati.  Disattivare `vtordisp` solo se non vi è alcuna possibilità che i costruttori e distruttori della classe chiamino funzioni virtuali nell'oggetto a cui fa riferimento il puntatore `this`.  
  
 Se si specifica `1` oppure `on`, per impostazione predefinita i membri nascosti `vtordisp` vengono abilitati quando sono necessari.  
  
 Se si specifica `2`, i membri nascosti `vtordisp` vengono abilitati per tutte le basi virtuali con funzioni virtuali. `vtordisp(2)` potrebbe essere necessario per assicurare prestazioni corrette di `dynamic_cast` su un oggetto parzialmente costruito.  Per ulteriori informazioni, vedere [Avviso del compilatore \(livello 1\) C4436](../error-messages/compiler-warnings/compiler-warning-level-1-c4436.md).  
  
 `#pragma vtordisp()`, senza argomenti, ripristina l'impostazione di vtordisp sul valore iniziale.  
  
```  
#pragma vtordisp(push, 2)  
class GetReal : virtual public VBase { ... };  
#pragma vtordisp(pop)  
```  
  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)