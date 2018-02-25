---
title: vtordisp | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- vc-pragma.vtordisp
- vtordisp_CPP
dev_langs:
- C++
helpviewer_keywords:
- pragmas, vtordisp
- vtordisp pragma
ms.assetid: 05b7d73c-43fa-4b62-8c8a-170a9e427391
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3cdb90de659dfe0f366d6501bc18c18e0cf39fff
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="vtordisp"></a>vtordisp
**Sezione specifica C++**  
  
 Controlla l'aggiunta del membro di spostamento di costruzione o distruzione nascosto vtordisp.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
#pragma vtordisp([push,] n)  
#pragma vtordisp(pop)  
#pragma vtordisp()  
#pragma vtordisp([push,] {on | off})  
```  
  
#### <a name="parameters"></a>Parametri  
 `push`  
 Inserisce l'impostazione corrente di vtordisp nello stack interno del compilatore e specifica la nuova impostazione di vtordisp su `n`.  Se `n` non viene specificato, l'impostazione corrente di vtordisp non viene modificata.  
  
 `pop`  
 Rimuove il primo record dallo stack interno del compilatore e ripristina l'impostazione di vtordisp su valore rimosso.  
  
 `n`  
 Specifica il nuovo valore per l'impostazione di vtordisp. I valori possibili sono 0, 1 o 2, corrispondenti alle opzioni del compilatore /vd0, /vd1 e /vd2. Per ulteriori informazioni, vedere [/vd (Disabilita spostamenti costruttori)](../build/reference/vd-disable-construction-displacements.md).  
  
 `on`  
 Equivalente a `#pragma vtordisp(1)`.  
  
 `off`  
 Equivalente a `#pragma vtordisp(0)`.  
  
## <a name="remarks"></a>Note  
 Il pragma `vtordisp` è applicabile il solo codice che utilizza basi virtuali. Se una classe derivata esegue l'override di una funzione virtuale che eredita da una classe base virtuale e se un costruttore o un distruttore per la classe derivata chiama tale funzione utilizzando un puntatore alla classe base virtuale, il compilatore potrebbe introdurre campi nascosti `vtordisp` aggiuntivi nelle classi con basi virtuali.  
  
 Il pragma `vtordisp` influisce sul layout delle classi che lo seguono. Le opzioni /vd0, /vd1 e /vd2 specificano lo stesso comportamento per moduli completi. Se si specifica `0` oppure `off`, i membri nascosti `vtordisp` vengono eliminati. Disattivare `vtordisp` solo se non vi è alcuna possibilità che i costruttori e distruttori della classe chiamino funzioni virtuali nell'oggetto a cui fa riferimento il puntatore `this`.  
  
 Se si specifica `1` oppure `on`, per impostazione predefinita i membri nascosti `vtordisp` vengono abilitati quando sono necessari.  
  
 Specifica di `2` consente nascosto `vtordisp` membri per tutte le basi virtuali con le funzioni virtuali.  `vtordisp(2)` potrebbe essere necessario per garantire la corretta esecuzione delle `dynamic_cast` su un oggetto parzialmente costruito. Per ulteriori informazioni, vedere [avviso del compilatore (livello 1) C4436](../error-messages/compiler-warnings/compiler-warning-level-1-c4436.md).  
  
 `#pragma vtordisp()`, senza argomenti, ripristina l'impostazione di vtordisp sul valore iniziale.  
  
```  
#pragma vtordisp(push, 2)  
class GetReal : virtual public VBase { ... };  
#pragma vtordisp(pop)  
```  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)