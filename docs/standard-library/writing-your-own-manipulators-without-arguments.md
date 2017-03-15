---
title: Scrittura di manipolatori personalizzati senza gli argomenti | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- manipulators
ms.assetid: 2dc62d09-45b7-454d-bd9d-55f3c72c206d
caps.latest.revision: 8
author: corob-msft
ms.author: corob
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
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 276bba3dd5ce5debd926ebbc4ccfaf52c6b92097
ms.lasthandoff: 02/24/2017

---
# <a name="writing-your-own-manipulators-without-arguments"></a>Scrittura di manipolatori personalizzati senza gli argomenti
La scrittura di manipolatori che non usano argomenti non richiede né la derivazione di classi né l'uso di macro complesse. Si supponga che la stampante richieda la coppia \<ESC>[ per attivare la modalità grassetto. È possibile inserire la coppia direttamente nel flusso:  
  
```  
cout <<"regular " <<'\033' <<'[' <<"boldface" <<endl;  
```  
  
 In alternativa, è possibile definire il manipolatore `bold` che inserisce i caratteri:  
  
```  
ostream& bold(ostream& os) {  
    return os <<'\033' <<'[';  
}  
cout <<"regular " <<bold <<"boldface" <<endl;  
```  
  
 La funzione `bold` definita a livello globale accetta un argomento di riferimento `ostream` che restituisce il riferimento `ostream`. Non è una funzione membro o di tipo friend perché non deve accedere a nessun elemento di classe privata. La funzione `bold` si connette al flusso perché l'operatore `<<` del flusso è sottoposto a overload per accettare tale tipo di funzione. Viene usata una dichiarazione simile alla seguente:  
  
```  
_Myt& operator<<(ios_base& (__cdecl *_Pfn)(ios_base&))  
{     // call ios_base manipulator  
 (*_Pfn)(*(ios_base *)this);

    return (*this);

}  
```  
  
 È possibile usare questa funzionalità per estendere altri operatori di overload. In questo caso, il fatto che `bold` inserisca i caratteri nel flusso è casuale. La funzione viene chiamata quando viene inserita nel flusso, non necessariamente quando i caratteri adiacenti vengono stampati. Di conseguenza, la stampa potrebbe essere ritardata a causa del buffer del flusso.  
  
## <a name="see-also"></a>Vedere anche  
 [Output Streams](../standard-library/output-streams.md) (Flussi di output)


