---
title: sezione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- section_CPP
- vc-pragma.section
dev_langs:
- C++
helpviewer_keywords:
- pragmas, section
- section pragma
ms.assetid: c67215e9-2c4a-4b0f-b691-2414d2e2d96f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 10f5783c6712852bfb53f457cea174f699c01ea0
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="section"></a>section
Crea una sezione in un file obj.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#pragma section( "section-name" [, attributes] )  
```  
  
## <a name="remarks"></a>Note  
 Il significato dei termini *segmento* e *sezione* sono intercambiabili in questo argomento.  
  
 Una sezione, una volta definita, rimarrà valida per il resto della compilazione. Tuttavia, è necessario utilizzare [__declspec(allocate)](../cpp/allocate.md) o non verrà inserito nella sezione.  
  
 *nome di sezione* è un parametro obbligatorio che sarà il nome della sezione. Il nome non deve essere in conflitto con alcun nome di sezione standard. Vedere [/sezione](../build/reference/section-specify-section-attributes.md) per un elenco di nomi di non utilizzare durante la creazione di una sezione.  
  
 `attributes` è un parametro facoltativo che è costituito da uno o più attributi delimitati da virgole che si desidera assegnare alla sezione. `attributes` possibili sono:  
  
 **read**  
 Consente operazioni di lettura sui dati.  
  
 **write**  
 Consente operazioni di scrittura sui dati.  
  
 **Eseguire**  
 Consente l'esecuzione di codice.  
  
 **shared**  
 Condivide la sezione tra tutti i processi che caricano l'immagine.  
  
 **nopage**  
 Contrassegna la sezione come non paginabile; utile per i driver di dispositivo Win32.  
  
 **nocache**  
 Contrassegna la sezione come non memorizzabile nella cache; utile per i driver di dispositivo Win32.  
  
 **discard**  
 Contrassegna la sezione come annullabile; utile per i driver di dispositivo Win32.  
  
 **remove**  
 Contrassegna la sezione come non residente in memoria; driver di dispositivo virtuali (V*x*D) solo.  
  
 Se non si specificano attributi, la sezione avrà attributi di lettura e scrittura.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente, la prima istruzione identifica la sezione e i relativi attributi. L'Integer `j` non viene inserito in `mysec` poiché non è stato dichiarato con `__declspec(allocate)`; `j` viene immesso nella sezione di dati. L'Integer `i` viene immesso in `mysec` come risultato del relativo attributo della classe di archiviazione `__declspec(allocate)`.  
  
```  
// pragma_section.cpp  
#pragma section("mysec",read,write)  
int j = 0;  
  
__declspec(allocate("mysec"))  
int i = 0;  
  
int main(){}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)