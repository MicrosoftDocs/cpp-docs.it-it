---
title: Attributi di classi di archiviazione estesi C | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C]
- extended attributes
- extended storage-class attributes
- storage class specifiers, C storage classes
ms.assetid: 2580735c-f5bf-46ab-9468-0696893d82be
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: e79b08ebba48221e8666ced75875a68f06bf2df3
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="c-extended-storage-class-attributes"></a>Attributi di classi di archiviazione estesi C
**Sezione specifica Microsoft**  
  
 Informazioni più aggiornate su questo argomento sono disponibili in [__declspec (C++ Reference)](../cpp/declspec.md).  
  
 La sintassi degli attributi estesa semplifica e standardizza le estensioni specifiche di Microsoft per il linguaggio C. Gli attributi della classe di archiviazione che utilizzano la sintassi degli attributi estesa includono thread, naked, dllimport e dllexport.  
  
 La sintassi degli attributi estesa per specificare le informazioni relative alla classe di archiviazione utilizza la parola chiave __declspec, che specifica che un'istanza di un determinato tipo deve essere archiviata con un attributo della classe di archiviazione specifico di Microsoft (thread, naked, dllimport o dllexport). Esempi di altri modificatori della classe di archiviazione includono le parole chiave static ed extern. Tuttavia, queste parole chiave fanno parte dello standard ANSI del linguaggio C e, in quanto tali, non vengono analizzate dalla sintassi degli attributi estesa.  
  
## <a name="syntax"></a>Sintassi  
 *storage-class-specifier*:  
 `__declspec` (*extended-decl-modifier-seq*) /* Specifico di Microsoft \*/  
  
 *extended-decl-modifier-seq*:  
 *extended-decl-modifier* opt  
  
 *extended-decl-modifier-seq extended-decl-modifier*  
  
 *extended-decl-modifier*:  
 **thread**  
  
 **naked**  
  
 **dllimport**  
  
 `dllexport`  
  
 Uno spazio vuoto separa i modificatori di dichiarazione. Si noti che *extended-decl-modifier-seq* può essere vuoto. In questo caso, __declspec non ha effetto.  
  
 Gli attributi della classe di archiviazione thread, naked, dllimport e dllexport sono una proprietà solo della dichiarazione dei dati o della funzione a cui sono associati e non consentono di ridefinire gli attributi del tipo della funzione stessa. L'attributo thread influisce solo sui dati. L'attributo naked influisce solo sulle funzioni. Gli attributi dllimport e dllexport influiscono sulle funzioni e sui dati.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni e tipi](../c-language/declarations-and-types.md)
