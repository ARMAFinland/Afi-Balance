# Afi-Balance

Adjustments and improvements to weapons, equipment, vehicles, and ammunition.  
This mod primarily focuses on modifying config entries with minimal changes to scripts and functions.  
Ace and cba are only mods that are required, others are optional.

Author: Tuntematon  
Repository: [GitHub](https://github.com/tuntematonjr/Afi-Balance) (now maintained by ARMAFinland)

This mod is build using [HEMTT](https://github.com/BrettMayson/HEMTT)

## Table of Contents
- [AA Tweaks](#aa-tweaks)
- [Artillery](#artillery)
- [Recoils](#recoils)
- [Ammo](#ammo)
- [Equipment](#equipment)
- [Immersion](#immersion)
- [Plot Armor](#plot-armor)
- [Impact Effects](#impact-effects)
- [Interaction Ranges](#interaction-ranges)
- [IED](#ied)
- [Mines (Vanilla)](#mines-vanilla)
- [Flares](#flares)
- [Flashlights](#flashlights)
- [Tripflares](#tripflares)
- [Tracers](#tracers)

## AA Tweaks
Adjusts the accuracy and lethality of AA missiles.

### aa_3cb_factions
Blowpipe magazine = `AFiBalance_aa_3cb_factions_blowpipe_round`

### Tunguska
`AFiBalance_aa_3cb_factions_mag_AZP23_2000_green`  
`AFiBalance_aa_3cb_factions_mag_AZP23_2000_red`  
`AFiBalance_aa_3cb_factions_mag_AZP23_2000_yellow`

### aa_rhs_afrf
Igla  
Afi old = `AFiBalance_aa_rhs_afrf_9k32_rocket_old`  
Afi new = `AFiBalance_aa_rhs_afrf_9k32_rocket`  
Static = `AFiBalance_aa_rhs_afrf_mag_2Rnd_Igla`  

Shilka  
`AFiBalance_aa_rhs_afrf_mag_AZP23_2000`  
`AFiBalance_aa_rhs_afrf_mag_AZP23_2000_mixed`

### aa_rhs_usaf
Stinger  
Afi old = `AFiBalance_aa_rhs_usaf_fim92_mag_old`  
Afi new = `AFiBalance_aa_rhs_usaf_fim92_mag`  
Static = `AFiBalance_aa_rhs_usaf_mag_4Rnd_stinger`  
Static = `AFiBalance_aa_rhs_usaf_mag_2Rnd_stinger`

## Artillery
Most of the artillery shells has been tweaked.  
Notes:
- Standardized mortar shells with consistent damage values.
- Balanced artillery shells for similar effectiveness on both sides.
- Increased emphasis on ACE fragmentation.

## Recoils
Adjusts recoil values for various weapons to improve balance and realism.

### recoils
Base recoil adjustments for vanilla Arma 3 weapons.

### recoils_3cb_factions
Recoil tweaks for 3CB Factions weapons.

### recoils_rhs_afrf
Recoil adjustments for RHS AFRF weapons.

### recoils_rhs_gref
Recoil tweaks for RHS GREF weapons.

### recoils_rhs_saf
Recoil adjustments for RHS SAF weapons.

### recoils_rhs_usaf
Recoil tweaks for RHS USAF weapons.

### recoils_uk3cb
Recoil adjustments for UK3CB weapons.

## Ammo
Tweaks to ammunition properties, including damage, penetration, and effects.

## Equipment
Adjustments to gear and equipment.

### vests_rhs_afrf
Armor and weight tweaks for RHS AFRF vests.

### backpack_rhs_afrf
Adjustments to RHS AFRF backpacks.

## Immersion
Enhances gameplay immersion through sound effects.

### immersion
Adds suppression sound effects for bullet impacts and explosions.

### immersion_rhs_afrf
Immersion tweaks specific to RHS AFRF.

### immersion_rhs_gref
Immersion tweaks specific to RHS GREF.

### immersion_rhs_usaf
Immersion tweaks specific to RHS USAF.

## Plot Armor
Adjusts unit hitpoints to make certain factions more resistant (plot armor).

### plotarmor_eaw
Plot armor for Eastern Armed Forces (EAW) units.

### plotarmor_fow
Plot armor for Faces of War (FOW) units.

## Impact Effects
Enhances visual effects for bullet impacts, explosions, and other effects with particles, lights, and smoke.

## Interaction Ranges
Adjusts ACE interaction distances for vehicles and objects.

## IED
Added separate IEDs with pressure plates, including the Nokia tune and more.  
[This modifies this ace fnc](https://github.com/acemod/ACE3/blob/7bb0d1c05227be74f42ae5d96914e1a6760e6f56/addons/explosives/functions/fnc_dialPhone.sqf)

## Mines (Vanilla)
- Reduce lethality of smaller AP mines, focusing on heavy wounding and fragmentation.

## Flares
Makes flares brighter.

### flare_tweaks
Base flare adjustments.

### flare_tweaks_rhs_afrf
Flare tweaks for RHS AFRF.

### flare_tweaks_rhs_usaf
Flare tweaks for RHS USAF.

## Flashlights
Makes flashlights better.

## Tripflares
Add 4 colours of air and ground variants of tripflares  
White = `AfiBalance_tripflare_Mag_White`  
Red = `AfiBalance_tripflare_Mag_Red`  
Green = `AfiBalance_tripflare_Mag_Green`  
Yellow = `AfiBalance_tripflare_Mag_Yellow`  

Ground:  
White = `AfiBalance_tripflare_Mag_Ground_White`  
Red = `AfiBalance_tripflare_Mag_Ground_Red`  
Green = `AfiBalance_tripflare_Mag_Ground_Green`  
Yellow = `AfiBalance_tripflare_Mag_Ground_Yellow`

## Tracers
Tweak tracers.
