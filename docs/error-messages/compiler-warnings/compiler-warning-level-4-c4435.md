---
title: "Avviso del compilatore (livello 4) C4435 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
dev_langs: 
  - "C++"
ms.assetid: a04524af-2b71-4ff9-9729-d9d1d1904ed7
caps.latest.revision: 2
caps.handback.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4435
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'classe1': il layout dell'oggetto in \/vd2 verrà modificato a causa della base virtuale '%$S'  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 Nell'opzione di compilazione predefinita di \/vd1, la classe derivata non ha un campo `vtordisp` per la base virtuale indicata.  Se \/vd2 o `#pragma vtordisp(2)` è in effetti, un campo `vtordisp` verrà visualizzato, modificando il layout dell'oggetto.  Questo può causare problemi di compatibilità binaria se i moduli di interazione sono compilati con impostazioni `vtordisp` diverse.  
  
## Esempio  
 Il codice di esempio seguente genera l'errore C4435.  
  
```cpp  
// C4435.cpp  
// compile with: /c /W4  
#pragma warning(default : 4435)  
class A  
{  
public:  
    virtual ~A() {}  
};  
  
class B : public virtual A  // C4435  
{};  
```  
  
## Vedere anche  
 [vtordisp](../../preprocessor/vtordisp.md)   
 [\/vd \(Disabilita spostamenti costruttori\)](../../build/reference/vd-disable-construction-displacements.md)