---
title: Classe di archiviazione | Microsoft Docs
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
- linkage [C++], external
- function storage class
- function specifiers, storage class
- storage classes
- Microsoft-specific storage classes
- external linkage, storage-class specifiers
- static storage class specifiers
ms.assetid: 39a79ba6-edf5-42b6-8e45-f94227603dd6
caps.latest.revision: 8
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
ms.openlocfilehash: a3d3a3c82f88bdcd2b4c77eb23e705ced6c056ce
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="storage-class"></a>Classe di archiviazione
L'identificatore della classe di archiviazione in una definizione di funzione offre alla funzione una classe di archiviazione `extern` o **static**.  
  
## <a name="syntax"></a>Sintassi  
 *function-definition*:  
 *declaration-specifiers* opt*attribute-seq* opt*declarator declaration-list* opt*compound-statement*  
  
 /\* *attribute-seq* è specifico di Microsoft */  
  
 *declaration-specifiers*:  
 *storage-class-specifier declaration-specifiers* opt  
  
 *type-specifier declaration-specifiers* opt  
  
 *type-qualifier declaration-specifiers* opt  
  
 *storage-class-specifier*: /\* Per le definizioni di funzione \*/  
 **extern**  
  
 **static**  
  
 Se una definizione non include *storage-class-specifier`extern`, la classe di archiviazione viene impostata automaticamente su* . È possibile dichiarare in modo esplicito una funzione come `extern`, ma non è obbligatorio.  
  
 Se la dichiarazione di una funzione contiene *storage-class-specifier*`extern`, l'identificatore avrà lo stesso collegamento di qualsiasi dichiarazione visibile dell'identificatore con ambito file. Se non è presente una dichiarazione visibile con ambito file, l'identificatore dispone di un collegamento esterno. Se un identificatore ha un ambito file e nessun *storage-class-specifier*, l'identificatore ha un collegamento esterno. Il collegamento esterno indica che ogni istanza dell'identificatore indica lo stesso oggetto o funzione. Per altre informazioni sul collegamento e l'ambito del file, vedere [Durata, ambito, visibilità e collegamento](../c-language/lifetime-scope-visibility-and-linkage.md).  
  
 Le dichiarazioni di funzione dell'ambito blocco con un identificatore della classe di archiviazione diverso da `extern` generano errori.  
  
 Una funzione con la classe di archiviazione **static** è visibile solo nel file di origine in cui è definita. Tutte le altre funzioni, sia se viene loro fornita la classe di archiviazione `extern` in modo esplicito o implicito, sono visibili in tutti i file di origine nel programma. Se si vuole la classe di archiviazione **static**, è necessario dichiararla alla prima occorrenza di una dichiarazione (se presente) della funzione e al momento della definizione della funzione.  
  
 **Sezione specifica Microsoft**  
  
 Quando le estensioni Microsoft sono abilitate, a una funzione originariamente dichiarata senza una classe di archiviazione (o con la classe di archiviazione `extern`) viene assegnata la classe di archiviazione **static** se la definizione di funzione si trova nello stesso file di origine e se la definizione specifica in modo esplicito la classe di archiviazione **static**.  
  
 Durante la compilazione con l'opzione del compilatore /Ze, le funzioni dichiarate in un blocco che utilizzano la parola chiave `extern` dispongono di visibilità globale. Ciò non si verifica durante la compilazione con /Za. Questa funzionalità non è affidabile se la portabilità del codice sorgente è una considerazione.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Definizioni di funzioni C](../c-language/c-function-definitions.md)
